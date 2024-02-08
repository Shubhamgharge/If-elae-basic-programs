//else if ladder
#include<stdio.h>
#include<conio.h>
int main()
{
  int day= 0;
  printf("\n Enter day number(0-7) to view day tex=");
  scanf("%d",&day);
  if(day==1)
  {
     printf("\n monday");
  }
  else if(day==2)
  {
     printf("\ntuesday");
  }
  else if(day==3)
  {
    printf("\n wedneday");
  }
  else if(day==4)
  {
    printf("\n thirsday");
  }
  else if(day==5)
  {
    printf("\n friday");
  }
  else if(day==6)
  {
    printf("\n Saturday");
  }
  else if(day==7)
  {
    printf("\n Sunday");
  }
  else
  {
   printf("\n invalid input");
  }
  printf("\n thanks for visit");
  getch();
  return 0; 
}