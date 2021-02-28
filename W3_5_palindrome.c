//A program to check pallindrome number using recursion
#include<stdio.h>
int palin(int x,int z)
{
  int y;
  y=x;
  if(y!=0)
  {
    z=z*10+(y%10);
    y/=10;
    return(palin(y,z));
  }
  else
    return z;
}  
int main()
{
    int x;
    printf(" Enter the number : ");
    scanf("%d",&x);
    if(palin(x,0)==x)
        printf(" %d is a palindrome number",x);
    else
        printf(" %d is not a palindrome number",x);
    return 0;
}