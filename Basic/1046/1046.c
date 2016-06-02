#include <stdio.h>
int main()
{
    int i,n,jia_han,jia_hua,yi_han,yi_hua;
    int jia_win=0,yi_win=0;
    scanf("%d",&n);
    while(n --)
    {
        scanf("%d %d %d %d",&jia_han,&jia_hua,&yi_han,&yi_hua);
        if(jia_han+yi_han==jia_hua||jia_han+yi_han==yi_hua){
            if(jia_han+yi_han!=jia_hua){
                yi_win++;
            }else if(jia_han+yi_han!=yi_hua){
                jia_win++;
            }
        }
    }
    printf("%d %d\n",yi_win,jia_win);
}
