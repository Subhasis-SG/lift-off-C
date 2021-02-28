// Online C compiler to run C program online
//a C program to count the total number of words in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,word=1;
    char strng[200];
    printf(" Enter the string \'less than 200 character\' :");
    gets(strng);
    j=strlen(strng);
    for(i=0;i<j;i++)
    {
       if(strng[i]==32)
       ++word;
    }
    printf(" The no of words is = %d",word);
    return 0;
}