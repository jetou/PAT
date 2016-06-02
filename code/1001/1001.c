#include <stdio.h>
int main()
{
    int n,i;
    i=0;
    scanf("%d",&n);
    while(n>1){
        if(!(n%2)){
            n=n/2;
        } else {
            n=(3*n+1)/2;
        }
        i++;
    }
    printf("%d\n",i);
}
