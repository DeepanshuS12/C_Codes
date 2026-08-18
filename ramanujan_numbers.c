#include <stdio.h>
int main() {
    int n1,n2,sum;
    int c[16001]={0};
    for(n1=1;n1<=20;n1++){
        for(n2=n1;n2<=20;n2++){
            sum=(n1*n1*n1)+(n2*n2*n2);
            c[sum]++;
        }
    }
    printf("ALL THE RAMANUJAN NUMBERS TILL PAIR (20,20) ARE : \n");
    for(sum=0;sum<=16000;sum++){
        if(c[sum]>=2)
        printf("%d\n",sum);
    }
     return 0;
}