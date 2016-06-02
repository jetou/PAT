#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){
    return *(double *)a>*(double *)b ? 1 : -1;
}
int main()
{
    int n,i,j,max=0;
    double p,a[100010];
    scanf("%d %lf",&n,&p);
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    qsort(a,n,sizeof(a[0]),cmp);
    for(i=0;i<n;i++){
        for(j=i+max-1;j<n;j++){
            if(a[i]*p<a[j])
                break;
            if(j-i+1>max)
                max = j-i+1;
        }
    }
    printf("%d",max);
}
