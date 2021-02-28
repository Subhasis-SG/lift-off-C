//A program to find the factorial of any number using recursion
#include<stdio.h>
int fact(int x,int f)
{
    int i;
    i=x;
    if(i>1)
    {
      f=f*(i-1);
      i--;
      return (fact(i,f));  
    }
    else
        return f;

}
int main()
{
    int x;
    printf(" Enter the number : ");
    scanf("%d",&x);
    printf(" The factorial of entered number is : %d",fact(x,x));
    return 0;
}