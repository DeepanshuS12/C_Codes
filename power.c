#include <stdio.h>
double clacPower(double x, long long n) {
  double po=1;
  if(n<0){
    x=1/x;
    n=-n;
  }
  while(n>0){
    if(n%2==1){
        po=po*x;
    }
    x=x*x;
    n=n/2;
  }
  return po;
}
void main()
{
    double num;
    int power;
    printf("ENTER A NUMBER :");
    scanf("%lf", &num);
    printf("ENTER POWER TO CALCULATE : ");
    scanf("%d", &power);
    double pn = clacPower(num, power);
    printf("%.3lf RAISED TO THE POWER %d IS %.3lf", num, power, pn);
}