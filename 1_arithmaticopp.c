#include<stdio.h>
int main()
{
    int a, b, add, diff, pro, mod;
    float div;
    printf("Enter Two Numbers:\n");
    scanf("%d%d", &a, &b);
    add = a+b;
    diff = a-b;
    pro = a*b;
    div = (float)a/b;
    mod = a%b;
    printf("\nSUM :  %d", add);
    printf("\nDIFFERENCE : %d", diff);
    printf("\nPRODUCT   :  %d", pro);
    printf("\nQUOTIENT : %f", div);
    printf("\nMODULUS : %d", mod);
    return 0;
}

