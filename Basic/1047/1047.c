#include <stdio.h>
int main()
{
    int n,team,score,null,max=0,i=0;
    int num[10001]={0};
    scanf("%d",&n);
    while(n --)
    {
        scanf("%d-%d",&team,&null);
        getchar();
        scanf("%d",&score);
        num[team] += score;
        if(num[team]>max){
            max = num[team];
            i=team;
        }
    }
    printf("%d %d\n",i,num[i]);

}
