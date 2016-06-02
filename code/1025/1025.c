#include <stdio.h>
#include <string.h>
int main()
{
    int data[100005];
    int next[100005];
    int list[100005];
    int result[100005];
    int i,j,temp,n,k,first;
    j=0;
    scanf("%d %d %d",&first,&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        scanf("%d %d",&data[temp],&next[temp]);
    }
    while(first!=-1){
        list[j]=first;
        j++;
        first=next[first];
    }
    for(i=0;i<j;i++){
        result[i]=list[i];
    }
    for(i=0;i<(j-j%k);i++)
    {
        result[i] = list[(i/k)*k+k-i%k-1];
    }
    for(i=0;i<j-1;i++){
        printf("%05d %d %05d\n",result[i],data[result[i]],result[i+1]);
    }
    printf("%05d %d %d\n",result[j-1],data[result[j-1]],-1);

    return 0;
}
