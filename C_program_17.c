

# c-program-17
to check whether the year is leap year or not
#include <stdio.h>
int main()
{
  int y;
  printf("Enter the year")
  scanf("%d",&y);
   if(y%4== 0)
  {
     printf("Leap year");
  }
   else if(y%400 == 0)
  {
     printf("Leap year");
  }
   else if (y % 4 == 0 && y % 100 == 0)
  {
     printf("Leap year");
  }
   else if (y% 100 == 0)
  {
     printf("Not leap year");
  }
   else
  {
     printf("Not leap year");
  }
  return 0;
}
