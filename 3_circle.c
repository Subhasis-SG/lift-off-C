#include<stdio.h>
int main()
{
	float r, d, c, ar;
	printf(" Enter the radius of the circle : ");
	scanf("%f", &r);
	d = r*2;
	c = 2*3.14*r;
	ar= 3.14*r*r;
	printf(" The Diameter is : %.2f \n", d);
	printf(" The Area is : %.2f \n", ar);
	printf(" The Circumference is : %.2f \n", c);
	return 0;
}
