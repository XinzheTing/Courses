//回溯剪枝
#include <stdio.h>
#include <stdbool.h>
int w[1005], choice[1005], bag, num, maxw = 0, sumw = 0;
void search(int t)
{
    if (t > num)
    {
        if (sumw > maxw)
            maxw = sumw;
        return;
    }
    if (sumw + w[t] <= bag)
    {
        choice[t] = 1;
        sumw += w[t];
        search(t + 1);
        sumw -= w[t];
    }
    choice[t] = 0;
    search(t + 1);
    return;
}
int main()
{
    int i, j;
    scanf("%d%d", &num, &bag);
    for (i = 0; i < num; i++)
        scanf("%d", &w[i]);
    search(0);
    printf("%d\n", maxw);
    getchar();
    getchar();
    return 0;
}