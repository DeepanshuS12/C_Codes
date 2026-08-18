#include <stdio.h>
int main()
{
    int n;
    printf("ENTER A SIDE OF A DICE : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("6 IS THE OPPOSITE SIDE OF 1");
        break;
    case 2:
        printf("5 IS THE OPPOSITE SIDE OF 2");
        break;
    case 3:
        printf("4 IS THE OPPOSITE SIDE OF 3");
        break;
    case 4:
        printf("3 IS THE OPPOSITE SIDE OF 4");
        break;
    case 5:
        printf("2 IS THE OPPOSITE SIDE OF 5");
        break;
    case 6:
        printf("1 IS THE OPPOSITE SIDE OF 6");
        break;

    default:
        printf("INVALID VALUE FOR FACE OF A DICE");
    }
    return 0;
}