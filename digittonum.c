// in this program we are forming a number from the digits which are given as input by the user
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, digit, number = 0, i;
    printf("\n Enter number of digits:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n enter the digits:");
        scanf("%d", &digit);
        number = number * 10 + digit;
    }
    printf("\n The formed number is: %d", number);
}