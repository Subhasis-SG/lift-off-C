//A program to find out GCD and LCM of two numbers using recursion
#include<stdio.h>
int gcd(int x,int y)  
{  
    if (x==0) 
        return y;  
    return gcd(y%x,x);  
}   
int lcm(int x, int y)  
{  
    return (x/gcd(x, y))*y; 
}  
int main()
{
    int x,y;
    printf(" Enter two numbers : ");
    scanf("%d%d",&x,&y);
    printf(" The GCD of entered numbers is : %d",gcd(x,y));
    printf("\n The LCM of entered numbers is : %d",lcm(x,y));
    return 0;
}