#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char n[1000];
    int output[10] = {0};
    scanf("%s",n);
    int len = strlen(n);
    int i;
    for(i=0;i<len;i++){
        output[n[i]-'0']++;
    }
    for(i=0;i<10;i++){
        if(output[i]!=0){
            printf("%d:%d\n",i,output[i]);
        }
    }
    return 0;
}
