#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>

uint32_t crc32_table[256];

int make_crc32_table()	//创建CRC32表
{
	uint32_t c;
	int i = 0;
	int bit = 0;

	for (i = 0; i < 256; i++)
	{
		c = (uint32_t)i;

		for (bit = 0; bit < 8; bit++)
		{
			if (c & 1)
			{
				c = (c >> 1) ^ (0xEDB88120);
			}
			else
			{
				c = c >> 1;
			}

		}
		crc32_table[i] = c;
	}}

uint32_t make_crc(uint32_t crc, unsigned char *string, uint32_t size)
{

	while (size--)
		crc = (crc >> 8) ^ (crc32_table[(crc ^ *string++) & 0xff]);

	return crc;
}

int main()
{
	int i;
	FILE *sp = NULL;
	FILE *dp = NULL;
	uint32_t count;
	uint32_t crc = 0xFFFFFFFF;
	unsigned char buf[1500];


	make_crc32_table();

	sp = fopen("testfile.txt", "rb");
	if (sp == NULL)
	{
		printf("open file error\n");
		return -1;
	}
	if (sp)
	{
		while (!feof(sp))
		{
			memset(buf, 0, sizeof(buf));
			count = fread(buf, 1, sizeof(buf), sp);
			printf("the number of Bytes:%d\n", count);
			if (count<46)
				count = 46;
			crc = make_crc(crc, buf, count);
			printf("crc is 0x%x\n", crc);
		}
	}
	getchar();
	return 0;

}

