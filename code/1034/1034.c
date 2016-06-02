#include <stdio.h>
#include <math.h>
long long calgonyueshu(long long m,long long n)
{
    long long temp;
    while(m%n!=0){
        temp = n;
        n = m%n;
        m = temp;
    }
    return n;
}

void printfenshu(long long fenzi, long long fenmu)
{
    if(fenzi % fenmu == 0)
    {
        if(fenzi/fenmu <0)
            printf("(%lld)",fenzi/fenmu);
        else
            printf("%lld",fenzi/fenmu);
    }
    else
    {
        long long zhengshu = fenzi/fenmu;
        fenzi = fenzi%fenmu;
        long long guy = calgonyueshu(fenzi,fenmu);
        if (guy<0)
            guy = -guy;
        fenzi/=guy;
        fenmu/=guy;
        if(zhengshu==0)
        {
            if(fenzi<0)
                printf("(%lld/%lld)",fenzi,fenmu);
            else
                printf("%lld/%lld",fenzi,fenmu);
        }
        else
        {
            if(zhengshu <0)
                printf("(%lld %lld/%lld)",zhengshu,-fenzi,fenmu);
            else
                printf("%lld %lld/%lld",zhengshu,fenzi,fenmu);
        }
    }
}

void expression(long long fenzi1,long long fenmu1,long long fenzi2,long long fenmu2,char exp)
{
    printfenshu(fenzi1,fenmu1);
    printf(" %c ",exp);
    printfenshu(fenzi2,fenmu2);
    printf(" = ");
}

void add(long long fenzi1,long long fenmu1, long long fenzi2, long long fenmu2)
{
    expression(fenzi1, fenmu1, fenzi2, fenmu2,'+');
    printfenshu(fenzi1*fenmu2+fenzi2*fenmu1,fenmu1*fenmu2);
    printf("\n");
}

void sub(long long fenzi1, long long fenmu1,long long fenzi2,long long fenmu2)
{
    expression(fenzi1, fenmu1, fenzi2, fenmu2, '-');
    printfenshu(fenzi1*fenmu2-fenzi2*fenmu1,fenmu1*fenmu2);
    printf("\n");
}

void mul(long long fenzi1, long long fenmu1,long long fenzi2, long long fenmu2)
{
    expression(fenzi1,fenmu1,fenzi2,fenmu2,'*');
    printfenshu(fenzi1*fenzi2,fenmu1*fenmu2);
    printf("\n");
}

void div(long long fenzi1, long long fenmu1, long long fenzi2, long long fenmu2)
{
    long long fenzi = fenzi1*fenmu2;
    long long fenmu = fenmu1*fenzi2;
    if(fenmu < 0)
    {
        fenmu = -fenmu;
        fenzi = -fenzi;
    }
    expression(fenzi1,fenmu1,fenzi2,fenmu2,'/');
    if(fenmu != 0)
        printfenshu(fenzi, fenmu);
    else
        printf("Inf");
    printf("\n");
}

int main()
{
    long long fenzi1,fenmu1,fenzi2,fenmu2;
    scanf("%lld/%lld %lld/%lld",&fenzi1,&fenmu1,&fenzi2,&fenmu2);

    add(fenzi1,fenmu1,fenzi2,fenmu2);
    sub(fenzi1,fenmu1,fenzi2,fenmu2);
    mul(fenzi1,fenmu1,fenzi2,fenmu2);
    div(fenzi1,fenmu1,fenzi2,fenmu2);

    return 0;
}
