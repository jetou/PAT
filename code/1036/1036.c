#include <stdio.h>
int main(){
    int n,i,j,sum;
    char c;
    scanf("%d %c",&n,&c);
    sum = n/2;
    if(n%2!=0)sum++;
    for(j=0;j<sum;j++){
        for(i=0;i<n;i++){
            if(j==0||j==sum-1){
                printf("%c",c);
            }else{
                if(i==0||i==n-1){
                    printf("%c",c);
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
