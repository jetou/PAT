#include <stdio.h>
int main()
{
    int n,i,j,k,m;
    int a[100010]={0},b[100010]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        a[m]++;
    }
    getchar();
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d",&m);
        b[i]=a[m];
    }
    for(i=0;i<k-1;i++){
        printf("%d ",b[i]);
    }
    printf("%d\n",b[i]);
}
