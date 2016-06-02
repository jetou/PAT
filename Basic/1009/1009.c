#include <stdio.h>
#include <string.h>
int main(){
    char input[80];
    char ouput[50][80];
    int i=0,j=0,num=0;
    memset(input,0,sizeof(input));
    memset(ouput,0,sizeof(ouput));

    gets(input);
    for(i=0;i<sizeof(input);i++){
        if(input[i] == ' '){
            j=0;
            num++;
            continue;
        }
        ouput[num][j++] = input[i];

    }

    for(num;num>0;num--){
        printf("%s ",ouput[num]);
    }
    printf("%s\n",ouput[num]);
    return 0;
}
