#include <stdio.h>
int main()
{
    char str[10001],pat[10]={'P','A','T','e','s','t'};
    int jisu[125]={0},i,j,n=0;
    gets(str);
    for(i=0;str[i]!='\0';i++){
        for(j=0;j<6;j++){
            if(str[i]==pat[j]){
                jisu[pat[j]]++;
                n++;
            }
        }
    }
    j=0;
    while(n --){
        if(jisu['P']>0) { printf("P"); --jisu['P']; }
        if(jisu['A']>0) { printf("A"); --jisu['A']; }
        if(jisu['T']>0) { printf("T"); --jisu['T']; }
        if(jisu['e']>0) { printf("e"); --jisu['e']; }
        if(jisu['s']>0) { printf("s"); --jisu['s']; }
        if(jisu['t']>0) { printf("t"); --jisu['t']; }
    }
}
