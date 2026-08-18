#include <stdio.h>
int main()
{
    int n = 1, l;
    printf("ENTER THE NUMBER OF LINES TO PRINT : ");
    scanf("%d", &l);
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}