#include <stdio.h>
#include <stdlib.h>
int *buf, **input,m,n,N,guide=0;
struct jiegou
{
    int x;
    int y;
} now={0,0},direction[4]={{1,0},{0,1},{-1,0},{0,-1}};
int cmp(void const *a,void const *b)
{
    return *(int *)b-*(int *)a;
}
int canmove()
{
    int x,y;
    x = now.x+direction[guide].x;
    y = now.y+direction[guide].y;
    if(x<0||x>=n||y<0||y>=m)
    {
        return 0;
    }
    else if(input[y][x]!=0){
        return 0;
    }
    return 1;
}
int move(int count)
{
    input[now.y][now.x] = buf[count];
    if(count == N-1){
        return 0;
    }
    while(!canmove()){
        guide = (guide+1)%4;
    }
    now.x+=direction[guide].x;
    now.y+=direction[guide].y;
    return 0;
}
int main()
{
    int count=0,i,j;
    scanf("%d",&N);
    buf = (int *)malloc(N*sizeof(int));
    for(i=0;i<N;i++){
        scanf("%d",buf+i);
    }
    qsort(buf,N,sizeof(int),cmp);
    m=N;
    n=1;
    for(i=N;i>0;i--){
        if(N%i==0){
            if(i-N/i<0){
                break;
            }
            if(i-N/i<m-n){
                m=i;
                n=N/i;
            }
        }
    }
    input = (int **)malloc(m*sizeof(int *));
    for(i=0;i<m;i++){
        input[i] = (int *)calloc(n,sizeof(int));
    }
    while(count<N){
        move(count);
        count++;
    }
    for(i=0;i<m;i++){
        for(j=0;j<n-1;j++){
            printf("%d ",input[i][j]);
        }
        printf("%d\n",input[i][j]);
    }
}
