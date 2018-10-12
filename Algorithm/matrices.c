#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define inf 99999999
int p[MAX + 1];  //存储各个矩阵的列数以及第一个矩阵的行数（作为第0个矩阵的列数）
int m[MAX][MAX]; //m[i][j]存储子问题的最优解
int s[MAX][MAX]; //s[i][j]存储子问题的最佳分割点
int n;           //矩阵个数
void matrix()
{

    int i, j, k;
    for (i = 0; i < n; i++)
        m[i][i] = 0; //最小子问题仅含有一个矩阵 ，对角线全为0

    for (i = 2; i <= n; i++)
        for (j = 0; j < n - i + 1; j++)
        {
            m[j][j + i - 1] = inf;
            for (k = 0; k < i - 1; k++)
            { //k代表分割点
                if (m[j][j + i - 1] > m[j][j + k] + m[j + k + 1][j + i - 1] + p[j] * p[j + k + 1] * p[j + i])
                {
                    m[j][j + i - 1] = m[j][j + k] + m[j + k + 1][j + i - 1] + p[j] * p[j + k + 1] * p[j + i];
                    s[j][j + i - 1] = k; //记录分割点
                }
            }
        }
}

void printmatrix(int leftindex, int rightindex) //递归打印输出
{
    if (leftindex == rightindex)
        printf("A%d", leftindex);
    else
    {
        printf("(");
        printmatrix(leftindex, leftindex + s[leftindex][rightindex]);
        printmatrix(leftindex + s[leftindex][rightindex] + 1, rightindex);
        printf(")");
    }
}
int main()
{
    int i, row, col;
    scanf("%d", &n);
    scanf("%d%d", &row, &col);
    p[0] = row;
    p[1] = col;
    for (i = 2; i <= n; i++)
    {
        scanf("%d%d", &row, &col);
        p[i] = col;
    }
    matrix();
    printf("%d\n", m[0][n - 1]);
    //printmatrix(0, n - 1);
    // getchar();
    // getchar();
    // getchar();
    return 0;
}