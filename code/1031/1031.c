#include <stdio.h>

int main()
{
    int check[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char ID[20] = {0},count=0,m[20]={"10X98765432"};
    int i,j,n,k = 0, temp = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++,temp=0,count=0){
        scanf("%s",ID);
        for(j=0;j<17;j++){
            if(ID[j]<'0'||ID[j]>'9')
                break;
            temp+=check[j]*(ID[j]-'0');
            count++;
        }
        if(count < 17 ||m[temp%11] != ID[17])
            k = printf("%s\n",ID);
    }
    if(k==0){
        printf("All passed\n");
    }
}
