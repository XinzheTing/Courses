// 循环赛日程表
#include <stdio.h>
#include <math.h>
#define N 8
int a[N + 1][N + 1];
void schedule(int k, int n)
{
	int t, m, s, i, j;
	for (i = 1; i <= n; i++)
		a[1][i] = i;
	m = 1;
	for (s = 0; s < k; s++)
	{
		n /= 2;
		for (t = 1; t <= n; t++)
		{
			for (i = m + 1; i <= 2 * m; i++)
			{
				for (j = m + 1; j <= 2 * m; j++)
				{
					a[i][j + (t - 1) * m * 2] = a[i - 1][j + (t - 1) * m * 2 - m];
					a[i][j + (t - 1) * m * 2 - m] = a[i - 1][j + (t - 1) * m * 2];
				}
			}
		}
		m *= 2;
	}
}
int main()
{
	int i, j, key, num;
	scanf("%d", &key);
	num = pow(2, key);
	schedule(key, num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= num; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}
