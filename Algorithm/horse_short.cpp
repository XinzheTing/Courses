#include <stdio.h>
#include <iostream>
#include <queue>
#define N 220
using namespace std;
typedef struct node
{
    int r;
    int c;
    int father;
} Node;
queue<Node> q;
int chess[N][N], mark[N][N];
int start_r, start_c, end_r, end_c, num;
int dirr[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dirc[8] = {1, 2, 2, 1, -1, -2, -2, -1};
bool check_it(Node t)
{
    if (t.r < 0 || t.r > 200)
        return false;
    if (t.c < 0 || t.c > 200)
        return false;
    if (mark[t.r][t.c] != 0)
        return false;
    return true;
}
void bfs()
{
    Node tem, np;
    int j;
    while (!q.empty())
    {
        tem = q.front();
        q.pop();
        if (tem.r == end_r && tem.c == end_c)
        {
            printf("%d\n", chess[end_r][end_c]);
            return;
        }
        else
        {
            for (j = 0; j < 8; j++)
            {
                np.r = tem.r + dirr[j];
                np.c = tem.c + dirc[j];
                np.father = 7 - j;
                //printf("%d %d\n", np.r, np.c);
                if (check_it(np))
                {
                    q.push(np);
                    mark[np.r][np.c] = 1;
                    chess[np.r][np.c] = chess[tem.r][tem.c] + 1;
                }
            }
        }
    }
    return;
}
int main()
{
    int i, j, k;
    Node tmp;
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < N; j++)
            for (k = 0; k < N; k++)
            {
                chess[j][k] = 0;
                mark[j][k] = 0;
            }
        while (!q.empty())
            q.pop();
        scanf("%d%d%d%d", &start_r, &start_c, &end_r, &end_c);
        tmp.r = start_r;
        tmp.c = start_c;
        tmp.father = -1;
        q.push(tmp);
        bfs();
    }
    getchar();
    getchar();
    return 0;
}
