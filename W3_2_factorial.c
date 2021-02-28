//A program to find the factorial of any number using functions
#include<stdio.h>
int fact(int x)
{
    int i,f;
    i=x;
    for(f=x;i>1;i--)
    {
      f=f*(i-1);
    }
    return f;
}
int main()
{
    int x;
    printf(" Enter the number : ");
    scanf("%d",&x);
    printf(" The factorial of entered number is : %d",fact(x));
    return 0;
}