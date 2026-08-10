#include <stdio.h>
void main(){
    int a,b,c;
    printf("ENTER THREE NUMBERS : \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d IS THE LARGEST AMONG THESE", a);
    }
    else if(b>c && b>a){
        printf("%d IS THE LARGEST AMONG THESE", b);
    }
    else{
        printf("%d IS THE LARGEST AMONG THESE", c);
    }
}