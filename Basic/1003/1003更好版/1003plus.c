#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,n;
    int count_P,count_T,count_A,pos_P,pos_T;
    scanf("%d\n",&n);
    while(n --){
        gets(a);
        count_P=count_T=count_A=pos_P=pos_T=pos_P=0;
        for(i=0;i<strlen(a);i++){
            if (a[i]=='P'){
                count_P++;
                pos_P=i;
            }
            if (a[i] == 'A'){
                count_A++;
            }
            if (a[i] == 'T'){
                count_T++;
                pos_T=i;
            }
        }
        if(count_P+count_A+count_T!=strlen(a) || pos_T-pos_P<=1 || count_P>1 || count_T>1 ||
        pos_P*(pos_T-pos_P-1) != strlen(a)-pos_T-1 ){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}
