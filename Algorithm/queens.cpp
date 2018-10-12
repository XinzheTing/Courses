#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int q[9],sum=0;
int i; int j;
int check(int k,int col)
{
	for(j=1;j<k;j++)
		{
			if(abs(col-q[j])==abs(k-j)||col==q[j])
				return 0;
	}
	return 1;
}
void queens(int t)
{
	if(t>8)
	{
		sum++;
		printf("No %d:\n",sum);
		for(i=1;i<=8;i++)
			{
				for(j=1;j<=8;j++)
				{
					if(j==q[i])
						printf("A");
					else
						printf(".");
				}
				printf("\n");
		}
			return;
	}
	int col;
	for(col=1;col<=8;col++)
	{
		if(check(t,col))
		{
			//printf("ok");
			q[t]=col;
			queens(t+1);
			q[t]=0;
		}
		
	}
}
int main()
{
	queens(1);
	getchar();
	return 0;
}