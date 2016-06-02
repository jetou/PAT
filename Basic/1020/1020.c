#include <stdio.h>
#include <stdlib.h>
typedef struct N
{
    double num;
    double total;
    double price;
}N;
int cmp(const void *a, const void *b)
{
    return (*(N*)b).price > (*(N*)a).price;
}
int main()
{
    int i,j,n,d;
    double sum=0;
    j=0;
    scanf("%d %d",&n,&d);
    N *data = (N *)malloc(1010*sizeof(N));
    for(i=0;i<n;i++){
        scanf("%lf",&data[i].num);
    }
    for(i=0;i<n;i++){
        scanf("%lf",&data[i].total);
    }
    for(i=0;i<n;i++){
        data[i].price = data[i].total/data[i].num;
    }
    qsort(data,n,sizeof(N),cmp);
    while(d>0&&j<n){
        if(d>data[j].num){
            d-=data[j].num;
            sum+=data[j].total;
        }else{
            sum+=data[j].price*d;
            d-=data[j].num;
        }
        j++;
    }

    printf("%.2lf\n",sum);

    return 0;
}
