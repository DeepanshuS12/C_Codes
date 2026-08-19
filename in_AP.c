#include <stdio.h>
int main() {
    int a,c,b,flag=0;
    printf("ENTER FIRST NUMBER OF THE SERIES : ");
    scanf("%d",&a);
    printf("ENTER COMMON DIFFERENCE OF THE SERIES : ");
    scanf("%d",&c);
    printf("ENTER THE NUMBER YOU HAVE TO CHECK IF IT IS IN THE SERIES : ");
    scanf("%d",&b);
    for(int i=a;i<=b;i=i+c){
        if(i == b){
            flag=1;
            break;
        }
    }
    if(flag == 1){
        printf("%d IS IN THE SERIES",b);
    }
    else{
        printf("%d IS NOT IN THE SERIES",b);
    }
     return 0;
}