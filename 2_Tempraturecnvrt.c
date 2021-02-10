#include<stdio.h>
int main()
{
    float c, f;
    printf("\n Enter the temperature in Celsius: ");
    scanf("%f", &c);
    f = (c*9/5) + 32;
    printf("\n Temprature in fahrenheit is : %f", f);
    return 0;
}
