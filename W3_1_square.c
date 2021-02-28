//A program to find the square of any number using functions
#include<stdio.h>
int sq(int x)
{
    x*=x;
    return x;
}
int main()
{
    int x;
    printf(" Enter the number : ");
    scanf("%d",&x);
    printf(" The square of entered number is : %d",sq(x));
    return 0;
}