#include <stdio.h>

#define n 1010
int L[n];
int d[n];
int MaxLength = 0;
void set_zero()
{
    int m;
    for (m = 0; m < n; m++)
    {
        L[m] = 0;
        d[m] = 0;
    }
    MaxLength = 0;
}
int main()
{
    int i, j, num;
    while (1)
    {
        set_zero();
        scanf("%d", &num);
        if (num == 0)
            break;
        else
            for (i = 1; i <= num; i++)
            {
                scanf("%d", &L[i]);
                d[i] = 1;
            }
        for (i = 2; i <= num; i++)
        {
            for (j = 1; j < i; j++)
                if (L[i] <= L[j])
                {
                    if (d[i] < d[j] + 1)
                        d[i] = d[j] + 1;
                }
            if (d[i] > MaxLength)
                MaxLength = d[i];
        }
        printf("%d\n", MaxLength);
    }
    getchar();
    getchar();
    return 0;
}