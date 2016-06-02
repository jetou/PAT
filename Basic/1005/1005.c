#include <stdio.h>
#include <string.h>
int main(){
    int num[101];
    int i,k,n,length;
    memset(num,-1,sizeof(num));
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d",&n);
        num[n] = 0;
    }
    for(i=0;i<101;i++){
        if(num[i]!=0){
            continue;
        }
        n=i;
        while(n!=1){
            if(n%2==0){
                n=n/2;
                if(n<=100){
                    num[n]=1;
                }
            } else {
                n = 3*n+1;
                n = n/2;
                if(n<=100){
                    num[n]=1;
                }
            }
        }
    }
    for(i=0,length=0;i<101;i++){
        if(num[i]==0){
            length++;
        }
    }
    for(i=100;i>=0;i--){
        if(num[i]==0){
            length--;
            if(length!=0){
                printf("%d ",i);
            }else{
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}

