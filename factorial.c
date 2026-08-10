#include <stdio.h>
void main(){
    int num,i;
    long fact=1;
    printf("ENTER A NUMBER FOR ITS FACTORIAL : ");
    scanf("%d", &num);
    if(num==0 || num==1){
        fact=1;
    }
    else{
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
}
printf("FACTORIAL OF %d IS %d ",num ,fact);
}