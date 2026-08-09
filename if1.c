#include <stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d", &num);
    if (num > 35)
    {
        printf("ENTERED NUMBER IS GREATER THAN 35");
    }
    else
    {
        printf("ENTERED NUMBER IS NOT GREATER THAN 35");
    }
    return 0;
}