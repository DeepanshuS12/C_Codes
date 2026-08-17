#include <stdio.h>
#include <math.h>
int main() {
    int num,i,r,c=0,digit,sum=0;
    printf("ENTER A NUMBER TO CHECK WHETHER IT IS ARMSTORNG NUMBER OR NOT : ");
    scanf("%d",&num);
    int temp=num;
    while (temp>0)
    {
        c++;
        temp=temp/10;
    }
    for(i=num;i>0;i=i/10){
        digit=i%10;
        sum=sum+(int)(pow(digit,c));
    }
    if(sum==num)
    printf("ARMSTRONG NUMBER");
    else
    printf("NOT A ARMSTRONG NUMBER");
     return 0;
}