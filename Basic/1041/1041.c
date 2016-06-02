#include <stdio.h>
typedef struct biao
{
    char id[20];
    int shangj;
    int test;
}biao;
int main()
{
    int n,i,m,k,l,p[1010]={0};
    scanf("%d",&n);
    biao biaos[n];
    for(i=0;i<n;i++){
        scanf("%s %d %d",biaos[i].id,&biaos[i].shangj,&biaos[i].test);
    }
    scanf("%d",&m);
    while(m --)
    {
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
            if(biaos[i].shangj == k)
            {
                printf("%s %d\n",biaos[i].id,biaos[i].test);
                continue;
            }
        }
    }
}
