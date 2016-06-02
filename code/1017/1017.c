#include <stdio.h>
#include <string.h>
int main(){
    char a[1000],q[1000];
    int b,j,i,sum,n,length;
    sum=0;
    scanf("%s",a);
    scanf("%d",&b);
    length = strlen(a);
    for(i=0,j=0;i<length;i++){
        sum = sum*10+a[i]-'0';
        if(i==0&&sum<b&&length>1){

        }else{
            q[j++]=sum/b+'0';
        }
        sum =sum%b;
    }
    n=sum;
    q[j]='\0';
    printf("%s %d",q,n);

}
