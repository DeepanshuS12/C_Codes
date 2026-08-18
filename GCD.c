#include <stdio.h>
int main() {
    int n1,n2,i,j,lar=0;
    printf("ENTER TWO NUMBERS TO FIND THIER GCD : ");
    scanf("%d %d",&n1 ,&n2);
    for(i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0){
            if(i>lar)
            lar=i;
        }
    }
    printf("GDC OF %d AND %d IS %d",n1 ,n2 ,lar);
     return 0;
}