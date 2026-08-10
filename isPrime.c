#include <stdio.h>
void main()
{
    int n, i, c = 0;
    printf("ENTER A NUMBER TO CHECK WHETHER IT IS PRIME OR NOT : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c != 2)
        printf("ENTERED NUMBER IS NOT PRIME NUMBER");
    else
        printf("ENTERED NUMBER IS PRIME NUMBER");
}