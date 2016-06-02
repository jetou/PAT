#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int broken[256];
    char str[100010],ch;
    int i;

    gets(str);
    for(i=0;str[i];i++)
    {
        ch = str[i];
        broken[ch] = 1;
        if(isupper(ch)){
            ch = ch-'A'+'a';
            broken[ch] = 1;
        }
    }

    while(~scanf("%c",&ch))
    {
        if(broken[ch] == 0){
            if(isupper(ch)&&broken['+']==1)
                continue;
            printf("%c",ch);
        }
    }

    return 0;
}
