#include<stdio.h>
int main()
{
    int a,b,d,n;
    int i=0;
    int sum[100];
    scanf("%d %d %d",&a,&b,&d);
    n=a+b;
    if(n==0){
        printf("0");
    }
    while(n!=0){
        sum[i++]=n%d;
        n/=d;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",sum[i]);
    }
    return 0;
}
