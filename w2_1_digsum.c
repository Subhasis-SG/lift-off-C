// a C program to calculate the sum of digits of a number.
#include<stdio.h>
int main()
{
    int dig,i=1,sum=0;
    printf(" Enter the digit :");
    scanf("%d",&dig);
    while(i!=0)
    {
        i=dig%10;
        sum=sum+i;
        dig=dig/10;
    }
    printf(" Sum of the numbers in digit = %d",sum);
    return 0;
}