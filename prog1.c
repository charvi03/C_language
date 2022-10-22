#include <stdio.h>
int main()
{
    // SUM OF TWO NUMBERS
    int a, b;
    printf("enter A");
    scanf("%d", &a);

    printf("enter B");
    scanf("%d", &b);

    int sum = a + b;
    //or directly put in print a+b
    printf("Sum is : %d" , sum);
    return 0;
}