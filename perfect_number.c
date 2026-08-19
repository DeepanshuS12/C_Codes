#include <stdio.h>
int main() {
    int num,sum=0,i;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum == num){
        printf("PERFECT NUMBER");
    }
    else{
        printf("NOT A PERFECT NUMBER");
    }
     return 0;
}