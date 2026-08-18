#include <stdio.h>
int main() {
    int a1,a2,d,n;
    printf("ENTER FIRST TWO TERMS OF AP SERIES : ");
    scanf("%d %d",&a1 ,&a2);
    printf("ENTER THE TERM WHICH YOU HAVE TO KNOW : ");
    scanf("%d",&n);
    d=a2-a1;
    int an=a1 + (n-1)*d;
    printf("THE %dTH TERM IS %d",n ,an);
     return 0;
}