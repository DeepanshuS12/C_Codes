#include <stdio.h>
double squareRoot(int n)
{
    double guess = n;
    double next;

    if (n == 0)
    {
        return 0;
    }
    while (1)
    {
        next = (guess + n / guess) / 2;

        if (guess - next < 0.000001 && next - guess < 0.000001)
            break;

        guess = next;
    }

    return next;
}
void main()
{
    int num;
    printf("ENTER A NUMBER FOR ITS SQUARE ROOT:");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("invalid input");
    }
    else
    {
        double sqrt = squareRoot(num);

        printf("SQUARE ROOT OF %d IS %.3f", num, sqrt);
    }
}