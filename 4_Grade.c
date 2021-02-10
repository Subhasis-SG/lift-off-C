#include <stdio.h>
int main() 
{
  int phy,che,mat,comp,bio;
  float p;
  printf("\n Enter marks scored in physics: ");
  scanf("%d",&phy);
  printf("\n Enter marks scored in chemistry : ");
  scanf("%d",&che);
  printf("\n Enter marks scored in mathematics : ");
  scanf("%d",&mat);
  printf("\n Enter marks scored in computer : ");
  scanf("%d",&comp);
  printf("\n Enter marks scored in biology : ");
  scanf("%d",&bio);
  p = (phy+che+mat+comp+bio)/5;
  printf("\n Percentage is : %f",p);
  if(p>=90 && p<=100)
  {
    printf("Your grade is : A");
  }
  else if(p>=80 && p<90)
  {
    printf("Your grade is : B");
  }
  else if(p>=70 && p<80)
  {
    printf("Your grade is : C");
  }
  else if(p>=60 && p<70)
  {
    printf("Your grade is : D");
  }
  else if(p>=40 && p<60)
  {
    printf("Your grade is : E");
  }
  else
  {
    printf("Your grade is : F");
  }
  return 0;
}
