#include <stdio.h>
int main(){
    long long int a,b,c;
    int t,i;
    i=0;
    scanf("%d",&t);
    while(t --){
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a+b>c){
            i++;
            printf("Case #%d: true\n",i);
        }else{
            i++;
            printf("Case #%d: false\n",i);
        }
    }
    return 0;
}
