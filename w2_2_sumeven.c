// a C program to print the sum of all the even elements and even position elements in an array.
#include<stdio.h>
int main()
{
    int i,n,ar[200];
    int sum1=0;
    int sum2=0;
    printf(" Enter the no elements you want to enter in array :");
    scanf("%d",&n);
    printf(" Enter the Elements of array :");
    for(i=0;i<n;i++)
    {
       scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+ar[i];
        }
        if(ar[i]%2==0)
        {
            sum2=sum2+ar[i];
        }
    }
    printf("\n Sum of the even numbers in array = %d",sum2);
    printf("\n sum of the even positioned numbers in array = %d",sum1);
    return 0;
}