#include <stdio.h>
int main() {
    int num,dsum=0,i,r,palin=0;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);
    for(i=num;i>0;i=i/10){
        r=i%10;
        dsum=dsum+r;
    }
    for(i=dsum;i>0;i=i/10){
        r=i%10;
        palin=palin*10+r;
    }
    if(palin == dsum)
    printf("SUM OF DIGITS IS PALINDROME");
    else
    printf("SUM OF DIGITS IS NOT PALINDROME");
     return 0;
}