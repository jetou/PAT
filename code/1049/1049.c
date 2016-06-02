#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    double num[100001],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&num[i]);
    }
    for(i=0;i<n;i++){
        sum += ((double)(i+1)*(double)(n-i))*num[i];
    }
    printf("%.2lf\n",sum);
}
