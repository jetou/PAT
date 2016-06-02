#include <stdio.h>
#include <string.h>
int a_count_c=0,a_count_j=0,a_count_b=0;
int b_count_c=0,b_count_j=0,b_count_b=0;
int jia_win=0,jia_lose=0,yi_win=0,yi_lose=0;
int main(){
    int n,i;
    char put_a,put_b;
    char jia,yi;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        getchar();
        scanf("%c%*c%c",&jia,&yi);
        test(jia,yi);
    }
    printf("%d %d %d\n",jia_win,n-jia_win-jia_lose,jia_lose);
    printf("%d %d %d\n",yi_win,n-yi_win-yi_lose,yi_lose);
    testcjb_a();
    testcjb_b();
}
test(a,b){
    if(a=='C'){
        if(b=='C'){
        }else if (b=='J'){
            jia_win++;
            yi_lose++;
            a_count_c++;
        }else if(b=='B'){
            yi_win++;
            jia_lose++;
            b_count_b++;
        }
    }else if(a=='J'){
        if(b=='C'){
            yi_win++;
            jia_lose++;
            b_count_c++;
        }else if(b=='J'){
        }else if(b=='B'){
            jia_win++;
            yi_lose++;
            a_count_j++;
        }
    }else if(a=='B'){
        if(b=='C'){
            jia_win++;
            yi_lose++;
            a_count_b++;
        }else if(b=='J'){
            yi_win++;
            jia_lose++;
            b_count_j++;
        }else if(b=='B'){
        }
    }
}
testcjb_a(){
    if(a_count_c==a_count_j&&a_count_c==a_count_b){
        printf("B ");
    }else if(a_count_c>a_count_b&&a_count_c>=a_count_j){
        printf("C ");
    }else if(a_count_b>=a_count_c&&a_count_b>=a_count_j){
        printf("B ");
    }else{
        printf ("J ");
    }
}
testcjb_b(){
    if(b_count_c==b_count_j&&b_count_c==b_count_b){
        printf("B");
    }else if(b_count_c>b_count_b&&b_count_c>=b_count_j){
        printf("C");
    }else if(b_count_b>=b_count_c&&b_count_b>=b_count_j){
        printf("B");
    }else{
        printf("J");
    }
}

