#include <stdio.h>
int main(){
    int n,m,i;
    int count = 0;
    int a[100];
    scanf("%d %d",&n,&m);
    m = n-m%n;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=m;i<n;i++){
        printf("%d",a[i]);
        count++;
        if (count!=n){
            printf(" ");
        }
    }
    for(i=0;i<m;i++){
        printf("%d",a[i]);
        count++;
        if (count != n){
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
