#include <stdio.h>
#include <string.h>
int main()
{
    char a[60],b[60],c[60],d[60];
    char week[7][5]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    int i,flag;
    char *p,*q;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    scanf("%s",d);
    for(p=a,q=b,flag=0;*p&&*q;p++,q++){
        if(*p==*q){
            if((flag==0) && (*p >= 65) && (*p <= 71)){
                printf("%s ",week[*p-65]);
                flag=1;
            }else if(flag == 1&&((*p >= 48 && *p <= 57)||(*p>=65&&*p<=78))){
                if(*p<=57){
                    printf("%02d:",(*p-48));
                    break;
                }else{
                    printf("%02d:",(*p-65+10));
                    break;
                }
            }else{
            continue;
            }
        }
    }
    for(i=0,p=c,q=d;*p&&*q;p++,q++,i++){
        if((*p==*q)&&((*p>=65&&*p<=90)||(*p>=97&&*p<=122))){
            printf("%02d",i);
            break;
        }
    }
    return 0;
}
