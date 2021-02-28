//a C program to find the largest and smallest element in an array
#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,ar[200];
    int l,s;
    printf(" Enter the no elements you want to enter in array \'less than 200\':");
    scanf("%d",&n);
    printf(" Enter the Elements of array :");
    for(i=0;i<n;i++)
    {
       scanf("%d",&ar[i]);
    }
    l=ar[0];
    s=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>l)
        {
            l=ar[i];
        }
        if(s>ar[i])
        {
            s=ar[i];
        }
    }
    printf(" The largest in array = %d",l);
    printf("\n The smallest  in array = %d",s);
    return 0;
}