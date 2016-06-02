#include <stdio.h>
int main() {
    char name[1000][20];
    char num[1000][20];
    int grade[1000];
    int n,i,q,max_n,min_n;
    int max = 0;
    int min = 100;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%s %s %d",name[i],num[i],&grade[i]);

        if(grade[i] >= max){
            max = grade[i];
            max_n = i;
        }
        if(grade[i] <= min){
            min = grade[i];
            min_n = i;
        }
    }
    printf("%s %s\n",name[max_n],num[max_n]);
    printf("%s %s\n",name[min_n],num[min_n]);
}
