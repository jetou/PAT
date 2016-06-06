#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct info_
{
    char name[10];
    int height;
} info;

int cmp(const void *a, const void *b)
{
    if(((info *)a)->height == ((info *)b)->height)
    {
        return strcmp(((info *)a)->name,((info *)b)->name);
    }
    return ((info *)b)->height - ((info *)a)->height;
}

int main()
{
    info *input;
    int i,j,n,k,cols,total,id,start,*result;
    scanf("%d %d",&n,&k);
    input = (info *)malloc(n*sizeof(info));
    result = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%s %d",input[i].name,&(input[i].height));
    }
    qsort(input,n,sizeof(info),cmp);
    total = n;
    id = 0;
    start = 0;
    for(i=0;i<k;i++)
    {
        cols = total - n/k*(k-i-1);
        total -= cols;
        for(j=1;j<=cols;j++)
        {
            result[start+cols/2+(j%2==0?-j/2:j/2)]=id++;
        }
        printf("%s",input[result[start]].name);
        for(j=1;j<cols;j++)
        {
            printf(" %s",input[result[start+j]].name);
        }
        printf("\n");
        start+=cols;
    }
}
