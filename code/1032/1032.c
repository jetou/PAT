#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,max,maxid,ID,SUM,num[100010];
    memset(num,0,100010*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&ID,&SUM);
        num[ID]+=SUM;
    }
    max = num[1]; maxid=1;
    for(i=2;i<n;i++){
        if(max<num[i]){
            max = num[i];
            maxid = i;
        }
    }
    printf("%d %d\n",maxid,max);
}
