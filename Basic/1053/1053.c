#include <stdio.h>
int main()
{
    //freopen("slyar.in", "r", stdin);
    //freopen("slyar.out", "w", stdout);
    int i,n,k,d,sum;
    double e,zon,maybe=0,sure=0,num;
    scanf("%d %lf %d",&n,&e,&d);
    zon = n;
    while(n --){
        scanf("%d",&k);
        sum=0;
        for(i=0;i<k;i++){
            scanf("%lf",&num);
            if(num<e){
                sum++;
            }
        }
        if(sum>k/2){
            maybe++;
            if(k>d){
                sure++;
                maybe--;
            }
        }
    }
    maybe = (double)maybe*(100/zon);
    sure = (double)sure*(100/zon);
    printf("%.1lf%% %.1lf%%",maybe,sure);
    //fclose(stdin);
    //fclose(stdout);
}
