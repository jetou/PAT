#include <stdio.h>
#include <math.h>
int main(){
    int m,n,i,j,a,sum,q;
    q=1;
    sum=0;
    scanf("%d %d",&m,&n);
    for(i=2;sum<=n;i++){
        for(j=2;j<=sqrt(i);j++){
            a=1;
            if(i%j==0){
                a=0;
                break;
            }
        }
        if(a){
            sum++;
        }
        if(sum>=m&&a&&sum<=n){
            if(q%10==0||sum==n)printf("%d\n",i);else printf("%d ",i);
            q++;
        }
    }

}
