//n皇后问题
#include <stdio.h>
#include <math.h>
#define N 10

int sum=0,q[N+1];
int check_it(int k,int col)
{
    int i;
    for(i=1;i<k;i++)
        if(abs(col-q[i])==abs(k-i)||col==q[i])
            return 0;
    return 1;
}
void print_it()
{
    int i,j;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(j==q[i])
            printf("A");
            else
            printf("*");
        }
        printf("\n");
    }
}
void queen(int t)
{
    if(t>N)
    {
        sum++;
        printf("No%d:\n",sum);
        print_it();
    }
    int col;
    for(col=1;col<=N;col++)
    {
        if(check_it(t,col))
        {
            q[t]=col;
            queen(t+1);
            q[t]=0;
        }
    }
}
int main()
{
    queen(1);
    getchar();
    getchar();
    return 0;
}