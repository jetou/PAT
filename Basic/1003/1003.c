#include <stdio.h>
#include <string.h>
int main(){
    int n,i,o,P,T,len,k;
    char a[101];
    scanf("%d\n",&n);
    while(n --){
        P=T=0;
        k=1;
        gets(a);
        len = strlen(a);
        for(o=len-1;o>0;o--){
            if(a[o]!='A'&&a[o]!='P'&&a[o]!='T'){
                printf("NO\n");
                k=0;
                break;
            }
            if(a[o]=='P'){
                if(P==0){
                    P=o;
                }else{
                    printf("NO\n");
                    k=0;
                    break;
                }
            } else if (a[o] == 'T'){
                if(T==0){
                    T=o;
                }else{
                    printf("NO\n");
                    k=0;
                    break;
                }
            }
        }
        if(k){
            if(P>T){
                printf("NO\n");
            } else if (T-P<=1){
                printf("NO\n");
            } else if (P*(T-P-1)!= len-T-1){
                printf("NO\n");
            } else {
                printf("YES\n");
            }
        }
    }
    return 0;
}
