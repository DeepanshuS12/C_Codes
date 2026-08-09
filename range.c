#include <stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d", &num);
    if (num < 35)
    {
        printf("ENTERED NUMBER IS LESS THAN 35");
    }
    else if (num >= 35 && num < 50)
    {
        printf("ENTERED NUMBER IS BETWEEN RANGE 35 TO 50");
    }
    else if (num >= 50 && num < 75)
    {
        printf("ENTERED NUMBER IS BETWEEN RANGE 50 TO 75");
    }
    else
    {
        printf("ENTERED NUMBER IS GREATER THAN 75");
    }
    return 0;
}