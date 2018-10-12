#include <stdio.h>
#define N 1000
int a[N], sum[N], num;
int i, j;

void maxsubsum()
{
    for (i = 1; i < num; i++)
    {
        if (sum[i - 1] + a[i] > a[i])
            sum[i] = sum[i - 1] + a[i];
        else
            sum[i] = a[i];
    }
    j = 0;
    for (i = 0; i < num; i++)
        if (sum[j] < sum[i])
            j = i;
}

int main()
{
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    maxsubsum();
    printf("%d\n", sum[j]);
    // getchar();
    // getchar();
    return 0;
}