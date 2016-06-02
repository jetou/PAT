#include <stdio.h>
#include <string.h>
int main()
{
    char a[1010],b[1010],input[1010],c[101];
    int i,j,o,lenb,lena,jisu=1;
    scanf("%s %s",a,c);
    lena = strlen(a); lenb = strlen(c);
    if(lena>lenb){
        for(i=lena-1,j=lenb-1;i>=0;i--,j--){
            if(j>=0)b[i]=c[j];
            else
                b[i]='0';
        }
        b[lena] = '\0';
        lenb = strlen(b);
    }else{
    memcpy(b,c,sizeof(c));
    }
    for(i=lenb-1,j=lena-1;j>=0&&i>=0;i--,j--){
        if(jisu%2==0){
            input[i]=(b[i]-'0')-(a[j]-'0')+'0';
            if(input[i]-'0'<0)input[i]=((input[i]-'0')+10)+'0';
            jisu++;
        }else{
            input[i]=((b[i]-'0')+(a[j]-'0'))%13+'0';
            switch(input[i]-'0'){
            case 10:
                    input[i]='J';break;
            case 11:
                    input[i]='Q';break;
            case 12:
                    input[i]='K';break;
            }
            jisu++;
        }
    }
    for(i;i>=0;i--){
        input[i] = b[i];
    }
    input[lenb]='\0';
    printf("%s\n",input);

}
