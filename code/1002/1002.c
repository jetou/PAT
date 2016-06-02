#include <stdio.h>
main() {
    char n[101];
    int i,sum,strsum,len;
    sum = 0;
    char *zhimu[11] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};
    for(i=0;i<=100;i++){
        scanf("%c",&n[i]);
        if((char)n[i]=='\n'){
            break;
        }
    }
    for(i=i-1;i>=0;i--){
        sum += (n[i]-'0');
    };
    if (sum / 100){
        printf("%s %s %s",zhimu[sum/100],zhimu[(sum/10)%10],zhimu[sum%10]);
    } else if (sum / 10){
        printf("%s %s",zhimu[sum/10],zhimu[sum%10]);
    } else {
        printf("%s",zhimu[sum]);
    }
}
