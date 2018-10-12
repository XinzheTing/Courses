#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
int maze[20][20], mark[20][20];
int start_r, start_c, end_r, end_c, step = 0;
queue<int> q;
int new_place(int row, int col, int dir)
{
    int row_r = row, col_c = col;
    int d_r[4] = {0, 1, 0, -1};
    int d_c[4] = {1, 0, -1, 0};
    /*switch(dir)
	{
		case 0:
			{
				row--;
				break;
			}
		case 1:
			{
				col++;
				break;
			}
		case 2:
			{
				row++;
				break;
			}
		case 3:
			{
				col--;
				break;
			}
	}*/
    row_r += d_r[dir];
    col_c += d_c[dir];
    if (row_r < 0 || row_r > 11 || col_c < 0 || col_c > 11)
        return -1;
    else
    {
        if (maze[row_r][col_c] == 0)
        {
            mark[row_r][col_c] = mark[row][col] + 1;
            return row_r * 12 + col_c;
        }
        else
            return -1;
    }
}
void bfs(int s_r, int s_c, int e_r, int e_c)
{
    int i;
    int pop_num, currect_r, currect_c;
    while (!q.empty())
    {
        pop_num = q.front();
        /*printf("%d\n",pop_num);*/
        q.pop();
        currect_r = pop_num / 12;
        currect_c = pop_num % 12;
        maze[currect_r][currect_c] = -1;
        int new_num[4];
        for (i = 0; i < 4; i++)
        {
            new_num[i] = new_place(currect_r, currect_c, i);
            if (new_num[i] != -1)
            {
                q.push(new_num[i]);
                if (new_num[i] == end_r * 12 + end_c)
                    break;
            }
        }
    }
    return;
}

int main()
{
    int i, j;
    char c;
    scanf("%d %d %d %d\n", &start_r, &start_c, &end_r, &end_c);
    start_r -= 1;
    start_c -= 1;
    end_r -= 1;
    end_c -= 1;
    if (maze[start_r][start_c] != 0 || maze[end_r][end_c] != 0)
    {
        printf("wrong");
        return 0;
    }
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j <= 12; j++)
        {
            scanf("%c", &c);
            //printf("%_c_ ",c);
            if (c == 'X')
                maze[i][j] = -1;
            else
                maze[i][j] = 0;
        }
    }
    q.push(start_r * 12 + start_c);
    mark[start_r][start_c] = 0;
    bfs(start_r, start_c, end_r, end_c);
    /*for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			printf("%2d ",maze[i][j]);
		}
		printf("\n");
	}*/
    printf("%d\n", mark[end_r][end_c]);
    return 0;
}
