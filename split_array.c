#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, sum1 = 0, sum2 = 0, total = 0, diff;
    int bestdiff = 999999;
    int bestsum1 = 0;
    int arr[5];
    printf("ENTER 5 ELEMENTS OF THE ARRAY : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
     }
     for (i = 0; i < 5; i++)
     {
         sum1 = sum1 + arr[i];
         sum2 = total - sum1;
         diff = abs(sum1 - sum2);
         if (diff != 0 && diff < bestdiff)
         {
             bestdiff = diff;
           bestsum1 = sum1;
         }
        }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            sum1 = arr[i] + arr[j];
            sum2 = total - sum1;
            diff = abs(sum1 - sum2);
            if (diff != 0 && diff < bestdiff)
            {
                bestdiff = diff;
                bestsum1 = sum1;
            }
        }
    }
    printf("MINIMUM DIFFERENCE IS %d\n", bestdiff);
    printf("SUM OF 1st ARRAY IS %d\n", bestsum1);
    printf("SUM OF 2nd ARRAY IS %d\n", (total-bestsum1));
    return 0;
}