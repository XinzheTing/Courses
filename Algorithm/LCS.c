#include <stdio.h>
#include <string.h>
#define n 100
char ch[n][n], tem;
int i = 2, j = 2, r_num, c_num, num;
int MAX(int i, int j)
{
    int a, b;
    a = ch[i - 1][j] - '0';
    b = ch[i][j - 1] - '0';
    if (a >= b)
        return a + '0';
    else
        return b + '0';
}
void LCS(char C[][n])
{
    for (i = 2; i <= r_num; i++)
    {
        for (j = 2; j < c_num; j++)
        {
            if (ch[i][0] == ch[0][j])
                ch[i][j] = ch[i - 1][j - 1] + 1;
            else
                ch[i][j] = MAX(i, j);
        }
    }
}
int main()
{
    while ((tem = getchar()) != '\n')
    {
        ch[0][i] = tem;
        i++;
    }
    c_num = i;
    while ((tem = getchar()) != '\n')
    {
        ch[j][0] = tem;
        j++;
    }
    r_num = j;
    for (i = 1; i < r_num - 1; i++)
    {
        ch[i][1] = '0';
    }
    for (j = 1; j < c_num; j++)
        ch[1][j] = '0';
    LCS(ch);
    // for (i = 0; i <= r_num - 1; i++)
    // {
    //     for (j = 0; j <= c_num; j++)
    //         printf("%c ", ch[i][j]);
    //     printf("\n");
    // }
    num = ch[r_num - 1][c_num - 1] - '0';
    printf("%d\n", num);
    //getchar();
    return 0;
}
