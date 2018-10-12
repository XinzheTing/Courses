#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *atgv[])
{
	FILE *fp;
	unsigned int ch;
	unsigned int chrh, chrl;
	unsigned int count = 0, checksum = 0, chr = 0, N = 0;
	unsigned long sum = 0;
	if ((fp = fopen("testfile.txt", "r+")) == NULL)
	{
		printf("file can't be opened");
		//return 1;
	}
	//统计文件中字节数，如果为奇数在末尾填一位0x00
	fseek(fp, 0, SEEK_END);
	N = ftell(fp);
	//printf("%d\n", N);
	if (N % 2 == 1)
		fputc(0, fp);
	fseek(fp, 0, SEEK_SET);
	printf("output type:data:sum\n");
	while (1)
	{
		if ((ch = fgetc(fp)) != EOF)
		{
			count++;
			if (ch != ' ')
			{
				if (ch >= '0'&&ch <= '9')
					ch -= '0';
				else
				{
					if (ch >= 'a'&&ch <= 'f')
						ch = ch - 'a' + 10;
					else
					{
						if (ch >= 'A'&&ch <= 'F')
							ch = ch - 'A' + 10;
					}
				}
				if (count % 2 == 1)
					chrh = ch << 4;	//先取得一个字节作高八位
				else
				{
					chrl = ch & 0x0f;
					chr = chrh | chrl;
					if (count % 4 == 2)
						sum += chrh << 8;
					else
					{
						if (count % 4 == 0)
							sum += chr;
					}
					printf("%x:%x\n", chr, sum);
				}

			}
			else
				count--;
		}
		else
			break;
	}

	if (sum >> 16)
		checksum = ~((long)(sum >> 16) + (long)(sum & 0x0000ffff));
	checksum = checksum & 0x0000ffff;
	printf("\nchecksum:%x\n", checksum);
	fclose(fp);
	getchar();
	return 0;
}
