#include <stdio.h>
#include <stdbool.h>
int gragh[25][25], color[25];
int solution = 0, n, r, m;
bool OK(int point_r, int c)
{
    int i;
    for (i = 0; i < point_r; i++)
    {
        if ((gragh[point_r][i] == 1) && (color[i] == c))
            return false;
    }
    return true;
}
void set_color(int count)
{
    int i;
    if (count >= n)
        solution++;
    else
    {
        for (i = 1; i <= m; i++)
        {
            if (OK(count, i))
            {
                color[count] = i;
                //printf("%d\n", color[count]);
                set_color(count + 1);
                color[count] = 0;
            }
        }
    }
}
int main()
{
    int i, row, col;
    scanf("%d%d%d", &n, &r, &m);
    for (i = 0; i < r; i++)
    {
        scanf("%d%d", &row, &col);
        gragh[row][col] = 1;
        gragh[col][row] = 1;
    }
    set_color(0);
    printf("%d\n", solution);
    /*for (i = 0; i < n; i++)
    {
        //printf("%d\n", color[i]);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", gragh[i][j]);
        }
        printf("\n");
    }
    getchar();
    getchar();*/
    return 0;
}