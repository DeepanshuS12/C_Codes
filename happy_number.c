#include <stdio.h>
bool isHappy(int n)
{
    int i, r, sum;
    if (n == 1)
    {
        return true;
    }
    else
    {
        while (n != 1 && n != 4)
        {
            sum = 0;
            while (n > 0)
            {
                r = n % 10;
                r = r * r;
                sum = sum + r;
                n = n / 10;
            }
            n = sum;
        }
        return sum == 1;
    }
}
void main()
{
    int num;
    printf("ENTER A NUMBER :");
    scanf("%d", &num);
    if (isHappy(num))
    {
        printf("\n ENTERED NUMBER IS HAPPY NUMBER");
    }
    else
    {
        printf("\n ENTERED NUMBER IS NOT HAPPY NUMBER");
    }
}