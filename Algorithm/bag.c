#include <stdio.h>
#define n 1005
int b = 0, num = 0, i = 0, j = 0;
int c_w = 0, c_v = 0;
int w_n[n], v_n[n];
int good[n], best[n], best_v = 0;
int remeber;
void search(int i)
{
	if (i >= num)
	{
		//printf("%d\n",best_v);
		if (c_v > best_v)
		{
			best_v = c_v;
			for (j = 0; j < n; j++)
			{
				best[j] = good[j];
			}
		}
		if (remeber < best_v)
			remeber = best_v;
		return;
	}
	if (c_w + w_n[i] <= b)
	{
		good[i] = 1;
		c_w += w_n[i];
		c_v += v_n[i];
		search(i + 1);
		c_w -= w_n[i];
		c_v -= v_n[i];
	}

	good[i] = 0;
	search(i + 1);
}
int main()
{
	b = 0, num = 0, i = 0, j = 0, c_w = 0, c_v = 0, best_v = 0;
	scanf("%d %d", &num, &b);
	for (j = 0; j < num; j++)
		scanf("%d", &w_n[j]);
	for (j = 0; j < num; j++)
		scanf("%d", &v_n[j]);
	search(0);
	printf("%d\n", remeber);
	getchar();
	getchar();
	return 0;
}
