#include <stdio.h>
#include <math.h>
int main() {
    int n,rev=0,r,i;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    for(i=n;i>0;i/=10){
        r=i%10;
        rev=rev*10+r;
    }
    long long p=(long long)pow(n,rev);
    printf("%d RAISED TO THE POWER %d IS %d", n, rev, p);
     return 0;
}