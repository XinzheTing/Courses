#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int num;
    struct Node *next;
} node, *pnode;
int main()
{
    pnode H,T,p;
    int tem,count=0;
    H=T=NULL;
    while (scanf("%d",&tem)==1)
    {
        p=(node*)malloc(sizeof(node));
        p->num=tem;
        if(count==0)
        {
            H=T=p;
        }
        else
        {
            T->next=p;
            T=p;
        }
        count++;
    }
    for (int i = 0; i < count;i++)
    {
        p = H;
        tem = 0;
        for (int j = 0; j < count - i; j++)
        {
            if(p->num>p->next->num)
            {
                tem = p->num;
                p->num = p->next->num;
                p->next->num = tem;
                tem = -1;
            }
            p = p->next;            
        }
        if(tem!=-1)
            break;
    }
    printf("%d", count);
    p=H;
    for (int i = 0; i < count; i++)
    {
        printf(" %d",p->num);
        p=p->next;
    }
    getchar();
    getchar();    
    getchar();
    return 0;
}