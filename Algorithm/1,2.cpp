#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
queue<int> q;
int visited[10001],start,e;
int main()
{
	int i;
	scanf("%d%d",&start,&e);
	q.push(start);
	int cur,now;
	while(!q.empty())
	{
		cur=q.front();
		q.pop();
		if(cur==e)
		{
			printf("%d",visited[cur]);
			break;
		}
		if(cur+1<=e&&!visited[cur+1])
		{
			now=cur+1;
			q.push(now);
			visited[now]=visited[cur]+1;
		}
		if((cur<<1<=e)&&!visited[cur<<1])
		{
			now=cur<<1;
			q.push(now);
			visited[now]=visited[cur]+1;
		}
		if(cur*cur<=e&&!visited[cur*cur])
		{
			now=cur*cur;
			q.push(now);
			visited[now]=visited[cur]+1;
		}
	}
	return 0;
}