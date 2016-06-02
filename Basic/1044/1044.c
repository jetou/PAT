#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char lownum[13][5] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char highnum[13][5] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    int N,i,j,num;
    scanf("%d",&N);
    getchar();
    for(i=0;i<N;i++){
        char str[10];
        gets(str);
        if(isdigit(str[0])){
            num = 0;
            for(j=0;str[j]!='\0';j++){
                num = num*10 + str[j] - '0';
            }
            if(num/13){
                if(num%13){
                    printf("%s ",highnum[num/13]);
                    printf("%s\n",lownum[num%13]);
                }else{
                    printf("%s\n",highnum[num/13]);
                }
            }else{
                printf("%s\n",lownum[num%13]);
            }
        }else{
            num = 0;
            for(j=1;j<13;j++){
                if( strstr(str,highnum[j])){
                    num+=13*j;
                    break;
                }
            }
            for(j=1;j<13;j++){
                if( strstr(str,lownum[j])){
                    num += j;
                    break;
                }
            }
            printf("%d\n",num);
        }
    }

    return 0;
}
