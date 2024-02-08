//if statement 
#include<stdio.h>
#include<conio.h>
int main()
{
  float amount= 0.0;
  printf("\n Enter your account belance=");
  scanf("%f",&amount);
  if(amount>1000)
  {
     printf("\n\n\t Welcome to mall!!!");
     printf("\nenjoy your shoping!!");
  }
  printf("\n\n thanks for visit");
  getch();
  return 0; 
}