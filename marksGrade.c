#include <stdio.h>
int main()
{
    int marks;
    printf("ENTER MARKS OF THE STUDENT:");
    scanf("%d", &marks);
    if (marks >= 85)
    {
        printf("STUDENT GOT 'O' GRADE");
    }
    else if (marks >= 75 && marks < 85)
    {
        printf("STUDENT GOT 'A+' GRADE");
    }
    else if (marks >= 65 && marks < 75)
    {
        printf("STUDENT GOT 'A' GRADE");
    }
    else if (marks >= 55 && marks < 65)
    {
        printf("STUDENT GOT 'B+' GRADE");
    }
    else if (marks >= 45 && marks < 55)
    {
        printf("STUDENT GOT 'B' GRADE");
    }
    else if (marks >= 35 && marks < 45)
    {
        printf("STUDENT GOT 'C' GRADE");
    }
    else
    {
        printf("STUDENT GOT 'FAILED'");
    }
    return 0;
}