#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1001],s2[1001];
    gets(s1);
    gets(s2);
    int n1=0,n2=0,lena,lenb,i,j;
    lena=strlen(s1);lenb=strlen(s2);
    for(i=0;i<lena;i++){
        for(j=0;j<lenb;j++){
            if(s1[i]==s2[j]){
                s1[i]='*';
                s2[j]='*';
                continue;
            }
        }
    }
    for(i=0;i<lena;i++){
        if(s1[i]!='*')
            n1++;
    }
    for(i=0;i<lenb;i++){
        if(s2[i]!='*')
            n2++;
    }
    if(n2){
        printf("No %d\n",n2);
    }else{
        printf("Yes %d\n",n1);
    }
}
