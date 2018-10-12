#include <stdio.h>
int main()
{
    int n, sn,sum=2;
    scanf("%d", &n);
    if (n <= 2)
       {
            sn = 1;
            sum = n;
       } 
    else
    {
        int a = 1, b = 1;
        for (int i = 0; i < n-2; i++)
        {
            sn = a + b;
            a = b;
            b = sn;
            sum += sn;
        }
    }
    printf("第n项：%d\n", sn);
    printf("前n项和：%d\n", sum);    
    getchar();
    getchar();
    return 0;
}