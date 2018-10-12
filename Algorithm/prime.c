//素数环
//使用交换法
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define N 20
int prime[N];

bool IsPrime(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void swap_it(int a, int b)
{
    int tmp;
    tmp = prime[a];
    prime[a] = prime[b];
    prime[b] = tmp;
}
void print_it()
{
    printf("%d", prime[0]);
    for (int i = 1; i < N; i++)
        printf(" %d", prime[i]);
    printf("\n");
}
void primecurcle(int place)
{
    static int solution = 0;
    if (solution > 2)
        return;
    if (place >= N)
    {
        if (IsPrime(prime[0] + prime[N - 1]))
        {
            //print_it();
            solution++;
            if (solution == 2) //只输出字典序最小的一组
                print_it();
        }
        return;
    }
    for (int i = place; i < N; i++)
    {
        swap_it(place, i);
        if (IsPrime(prime[place - 1] + prime[place]))
        {
            primecurcle(place + 1);
        }
        swap_it(place, i);
    }
}
int main()
{
    int i;
    for (i = 1; i <= N; i++)
        prime[i - 1] = i;
    // for (i = 0; i < N; i++)
    //     printf("%d ", prime[i]);
    primecurcle(1);
    getchar();
    return 0;
}