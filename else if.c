///else if
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
  }
  else
  {
     printf("\n\n\t minimum balance required to shop in mall is 1000+.\n");
  }
  getch();
  printf("\n\n thanks for visit");
  getch();
  return 0; 
}