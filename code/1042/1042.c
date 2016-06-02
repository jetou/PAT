#include <stdio.h>
#include <ctype.h>
int main()
{
    int i,max=0;
    char str[1001];
    int input[125]={0};
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
        {
            input[str[i]+32]++;
            if(max<input[str[i]+32]){
                max = input[str[i]+32];
            }
        }
        else if(islower(str[i]))
        {
            input[str[i]]++;
            if(max<input[str[i]]){
                max = input[str[i]];
            }
        }
    }
    for(i=97;i<124;i++){
        if(input[i] == max){
            printf("%c %d",i,max);
            break;
        }
    }
    return 0;
}
