#include<iostream>
#include<queue>
#include<map>

using namespace std;

queue <int> q1;

map <int, int> smap;//stepmap, 记录到达每个状态的最小步数。

int dr[4] = {0, 1, 0, -1};
int dc[4] = {-1, 0, 1, 0};

int readdata();
int bfs();
void init(int s);
int canmoveto(int u, int dire);
int moveto(int u, int dire);

int main()
{
	int s, num;
	
	s = readdata();

	init(s);

	num = bfs();

	cout << num << endl;

	return (0);
}

int readdata()
{
	int i, s, num;

	s = 0;
	for(i = 0; i < 9; i++)
	{
		cin >> num;
		s = s * 10 + num;
	}
	return(s);
}

void init(int s)
{
	q1.push(s);
	smap[s] = 0;
}

int bfs()
{
	int i;
	int u, v;

	while(!q1.empty())
	{
		u = q1.front();
		q1.pop();
		for(i = 0; i < 4; i++)
		{
			if(canmoveto(u, i))
			{
				v = moveto(u, i);
				if(v == 123456780)
				{
					return(smap[u] + 1);
				}
				if(smap.count(v) == 0)
				{
					q1.push(v);
					smap[v] = smap[u] + 1;
				}
			}
		}
	}
	return(-1);
}

int canmoveto(int u, int dire)
{
	int i, j;
	int b[3][3];
	int row, col;
	int r, c;
	int v;

	v = u;
	for(i = 2; i >= 0; i--)
	{
		for(j = 2; j >= 0; j--)
		{
			b[i][j] = v % 10;
			v = v / 10;
			if(b[i][j] == 0)
			{
				row = i;
				col = j;
			}
		}
	}

	r = row + dr[dire];
	c = col + dc[dire];

	if(r >= 0 && r < 3 && c >= 0 && c < 3)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int moveto(int u, int dire)
{
	int i, j;
	int b[3][3];
	int row, col;
	int r, c;
	int v;

	v = u;
	for(i = 2; i >= 0; i--)
	{
		for(j = 2; j >= 0; j--)
		{
			b[i][j] = v % 10;
			v = v / 10;
			if(b[i][j] == 0)
			{
				row = i;
				col = j;
			}
		}
	}

	r = row + dr[dire];
	c = col + dc[dire];

	b[row][col] = b[r][c];
	b[r][c] = 0;

	v = 0;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			v = v * 10 + b[i][j];
		}
	}

	return(v);
}