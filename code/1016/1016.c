#include<stdio.h>
#include<string.h>
int main(){
    char input[1001],da,db,A[100],B[100];
    int sum,i,j,a,b,pa,pb,l,k;
    j=1,pa=0,pb=0,k=l=1;
    memset(input,0,sizeof(input));
    gets(input);
    for(i=0;i<strlen(input);i++){
        if(input[i]==' '){
            if(j==1){
                da = input[i+1];
                a = i;
            }else if(j==3){
                db = input[i+1];
                b = i;
            }
            j++;
        }
    }
    j=0;
    for(i=0;i<strlen(input);i++){
        if(i<a){
            A[i]=input[i];
        }else if(i>a+2&&i<b){
            B[j]=input[i];
            j++;
        }
    }
    for(i=0;i<strlen(A);i++){
        if(A[i]-'0'==da-'0'){
            pa+=(da-'0')*l;
            l*=10;
        }
    }
    for(i=0;i<strlen(B);i++){
        if(B[i]-'0'==db-'0'){
            pb+=(db-'0')*k;
            k*=10;
        }
    }
    printf("%d",pb+pa);

    return 0;
}

