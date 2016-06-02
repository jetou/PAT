#include <stdio.h>
#include <string.h>
int cmp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int i,n,max=0,j=0;
    scanf("%d",&n);
    int num[n],num_s[n],input[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
        num_s[i]=num[i];
    }
    qsort(num_s,n,sizeof(int),cmp);
    for(i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
        if(num[i]==num_s[i]&&num[i] == max){
            input[j++] = num[i];
        }
    }
    printf("%d\n",j);
    for(i=0;i<j;i++){
        if(i == 0)printf("%d",input[i]);
        else printf(" %d",input[i]);
    }
    printf("\n");
}
