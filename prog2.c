#include <stdio.h>
int main()
{
    //AREA OF SQUARE
    int side;
    printf("enter side of sqaure");
    scanf("%d", &side);

    int area = side * side;
    printf("Area of square  is : %d  sq.m", area);
    return 0;
}