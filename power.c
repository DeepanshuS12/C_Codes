#include <stdio.h>
double clacPower(double x, int n) {
  double po = 1.0;
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        while(n>0)
        {
            po=po*x;
            n--;
        }
    }
    if (n < 0)
    {
        while(n<0)
        {
            po=po*x;
            n++;
        }
        po = 1 / po;
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