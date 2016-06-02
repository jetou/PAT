#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
if(n/100!=0){
    for(i=n/100;i>0;i--){
        printf("B");
    }
    for(i=n/10%10;i>0;i--){
        printf("S");
    }
    for(i=1;i<=n%10;i++){
        printf("%d",i);
    }
}else if(n/10!=0){
    for(i=n/10;i>0;i--){
        printf("S");
    }
    for(i=1;i<=n%10;i++){
        printf("%d",i);
    }
}else{
    for(i=1;i<=n;i++){
        printf("%d",i);
    }
}
return 0;
}

