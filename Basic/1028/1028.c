#include <stdio.h>
#include <string.h>
int main()
{
    int n,sum,i,j,yyyy,mm,dd;
    int min[5],max[5];
    min[0]=1814,min[1]=9,min[2]=6;
    max[0]=2014,max[1]=9,max[2]=6;
    char name[5],old[5],young[5];
    sum=0;
    scanf("%d",&n);
    while(n --)
    {
        scanf("%s",name);
        getchar();
        scanf("%d/%d/%d/",&yyyy,&mm,&dd);
        if(yyyy>=1814&&yyyy<=2014)
        {
            if(yyyy==1814&&mm==9&&dd<6||yyyy==1814&&mm<9){
                continue;}
            if(yyyy==2014&&mm==9&&dd>6||yyyy==2014&&mm>9){
                continue;}
            sum++;
            if(max[0]==yyyy){
                if(max[1]==mm){
                    if(max[2]>=dd){
                        strcpy(old,name);
                        max[0]=yyyy,max[1]=mm,max[2]=dd;
                    }
                }else if(max[1]>mm){
                        strcpy(old,name);
                        max[0]=yyyy,max[1]=mm,max[2]=dd;
                }
            }
            if(max[0]>yyyy){
                strcpy(old,name);
                max[0]=yyyy,max[1]=mm,max[2]=dd;
            }
            if(min[0]==yyyy){
                if(min[1]==mm){
                    if(min[2]<=dd){
                        strcpy(young,name);
                        min[0]=yyyy,min[1]=mm,min[2]=dd;
                    }
                }else if(min[1]<mm){
                    strcpy(young,name);
                    min[0]=yyyy,min[1]=mm,min[2]=dd;
                }
            }
            if(min[0]<yyyy){
                strcpy(young,name);
                min[0]=yyyy,min[1]=mm,min[2]=dd;
            }
        }
    }
    if(sum==0){
        printf("0");
    }else{
    printf("%d %s %s",sum,old,young);
    }

    return 0;
}
