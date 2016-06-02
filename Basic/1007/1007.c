#include <stdio.h>
#include <math.h>
int main(){
    int n,i,q,p,num,sums;
    sums=num=0;
    int sum[100005];
    scanf("%d",&n);
    for(i=3;i<=n;i+=2){
        for(q=2;q<=sqrt(i);q++){
            p=1;
            if(i%q==0){
                p=0;
                break;
            }
        }
        if(p){
            sum[num] = i;
            num++;
        }
    }
    for(i=0;i<num-1;i++){
        if(sum[i+1]-sum[i]==2){
            sums++;
        }
    }
    printf("%d\n",sums);

    return 0;
}
