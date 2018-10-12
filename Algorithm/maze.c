#include <stdio.h>
#include <stdbool.h>
int row, col, start_r, start_c, end_r, end_c, solution = 0;
int m[20][20];
int dirr[4] = {0, 1, 0, -1};
int dirc[4] = {1, 0, -1, 0};
bool make_place(int r, int c, int dir)
{
    r += dirr[dir];
    c += dirc[dir];
    if (r < 0 || r > row - 1 || c < 0 || c > col - 1)
        return false;
    else
    {
        if (m[r][c] == 0)
            return true;
        else
            return false;
    }
}
void maze(int p_r, int p_c)
{
    if (solution == 1)
        return;
    if ((p_r == end_r) && (p_c == end_c))
    {
        solution = 1;
        return;
    }
    int new_r, new_c, i;
    for (i = 0; i < 4; i++)
    {
        if (make_place(p_r, p_c, i))
        {
            new_r = p_r + dirr[i];
            new_c = p_c + dirc[i];
            m[p_r][p_c] = 1; //标志当前位置已走过
            maze(new_r, new_c);
        }
        m[p_r][p_c] = 0; //回溯，取消标记
    }
    return;
}
int main()
{
    int i, j;
    scanf("%d%d", &row, &col);
    scanf("%d%d", &start_r, &start_c);
    scanf("%d%d", &end_r, &end_c);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            scanf("%d", &m[i][j]);
    }
    maze(start_r, start_c);
    if (solution == 1)
        printf("Yes\n");
    else
        printf("No\n");
    getchar();
    getchar();
    return 0;
}