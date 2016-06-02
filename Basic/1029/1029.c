#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char should[100],actual[100],test[100];
    int i,lena,lenb,j;
    memset(test,0,sizeof(test));
    scanf("%s",should);
    scanf("%s",actual);
    lena = strlen(should);
    lenb = strlen(actual);
    for(i=0;i<lena;i++){
        test[should[i]]=1;
    }
    for(i=0;i<lenb;i++){
        test[actual[i]]=0;
    }
    for(i=0;i<lena;i++){
        if(test[should[i]]==1){
            if(islower(should[i])){
                printf("%c",should[i]-32);
                test[should[i]]=0;
                test[should[i]-32]=0;
                continue;
            }
            printf("%c",should[i]);
            test[should[i]]=0;
            if(isupper(should[i])){
                test[should[i]+32]=0;
            }
        }
    }
}
