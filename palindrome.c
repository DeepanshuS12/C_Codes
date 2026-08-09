#include <stdio.h>
bool isPalindrome(int x)
{
    int r, n = 0;
    int temp = x;
    if (x > 0 && x < 10)
        return true;
    else
    {
        for(int i=x;i>0;i=i/10){
            r=i%10;
            n=n*10+r;
        }
        return temp == n;
    }
}
void main()
{
    int num;
    printf("ENTER A NUMBER: \n");
    scanf("%d", &num);
    if (isPalindrome(num))
    {
        printf("PALINDROME NUMBER");
    }
    else
    {
        printf("NOT A PALINDROME NUMBER");
    }
}