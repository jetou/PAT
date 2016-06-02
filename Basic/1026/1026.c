#include <stdio.h>
int main()
{
    int c1,c2,num;
    scanf("%d %d",&c1,&c2);
    num=(c2-c1)/100;
    if((c2-c1)%100>=50){
        num++;
    }
    printf("%02d:%02d:%02d\n",num/3600,(num%3600)/60,num%60);
}
