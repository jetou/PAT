#include<stdio.h>
#include<stdlib.h>

int ascend, descend;
int get_num(int n){
    int a[4],i;
    for(i=0;i<4;i++){
        a[i] = n%10;
        n /= 10;
    }
    int cmp(int *a, int *b){
        return *a-*b;
    }
    qsort(a,4,sizeof(a[0]),cmp);
    descend = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
    ascend = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];

}
int main(){
    int n;
    scanf("%d",&n);

    do{
        get_num(n);

        n=descend - ascend;
        printf("%04d - %04d = %04d\n",descend,ascend,n);

        if(ascend == descend)
            break;
    }while(n!=6174);
    return 0;
}
