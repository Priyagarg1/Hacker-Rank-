# Hacker-Rank C Programming
Hacker rank problems
# c-program-0
hello world program of hacker rank
#include <stdio.h>
#include <string.h>
int main() 
{
    char input_string[100];
    scanf("%[^\n]",&input_string);
    printf("Hello, World!");
    printf("\n%s",input_string);

    return 0;
}

# C-programming1
playing with characters on hacker rank
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
     char ch;
     char s[10];
     char sen[80];
     scanf("%c",&ch);
     scanf("\n%s",&s);
     scanf("\n%[^\n]%*c",sen);
     printf("%c",ch);
     printf("\n%s",s);
     printf("\n%s",sen);    
    return 0;
}


# c-program-2
sum and difference program of hacker rank
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float x,y;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&x,&y);
    printf("%d %d",a+b,a-b);
    printf("\n%.1f %.1f",x+y,x-y);
    return 0;
}


# C-program-3
Function in c hacker rank
#include <stdio.h>
int max_of_four(int a,int b, int c, int d)
{
    if(a>b && a>c && a>d)
    {
        printf("%d",a);
    }
    else if(b>c &&  b>d)
    {
        printf("%d",b);
    }
    else if(c>d)
    {
        printf("%d",c);
    }
   else
    {
        printf("%d",d);
    } 
    return (a,b,c,d);
}

int main() {
    int a, b, c, d;
     int answer;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    answer = max_of_four(a, b, c, d);
    return 0;
    
}

# c-program-4
pointer in c on hacker rank
#include <stdio.h>

void update(int *a,int *b ) {
    int c,d;
    c =*a+*b;
    if(*a>*b)
    {
        d=*a-*b;
    }
    else
    {
        d=*b-*a;
    }
    *a=c;
    *b=d;
}

int main() {
    int a, b ;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


# c-program-5
conditional statement hacker rank program
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("one");
    }
    if(n==2)
    {
        printf("two");
    }
    if(n==3)
    {
        printf("three");
    }
    if(n==4)
    
    {
        printf("four");
    }
    if(n==5)
    {
        printf("five");
    }
    if(n==6)
    {
        printf("six");
    }
    if(n==7)
    {
        printf("seven");
    }
    if(n==8)
    {
        printf("eight");
    }
    if(n==9)
    {
        printf("nine");
    }
    if(n>9)
    {
        printf("Greater than 9");
    }
    
    return 0;
}


# C-program-6
sum of digits of five number
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
   {
    int t,n,sum=0,remainder; 
   scanf("%d",&n);
   t = n;
   while(t != 0)
   {
   remainder = t % 10;
   sum = sum + remainder;
   t = t/10;
   }
   printf("%d\n",sum);
   t++;
   return 0; 
}

# C-program-8
1 D array in C  hacker rank program
#include<stdio.h>
#include<math.h>
int main()
   {
   int i,arr[1000],num,sum;
   scanf("%d",&num);
   for(i=0;i<num;i++)
   scanf("%d",&arr[i]);
   sum=0;
   for(i=0;i<num;i++)
   sum=sum+arr[i];
   printf("%d\n",sum);
   return 0; 
}


# c-program-9
Operator on hacker rank 30 days of code 
#include<stdio.h>
#include<math.h>
int main()
{
 double meal_cost,a,b;
  int tip,tax,total_cost;
 scanf("\n%lf %d %d",&meal_cost,&tip,&tax);
  a=(meal_cost*tip)/100;
  b=(meal_cost*tax)/100;
 total_cost=round(meal_cost+a+b);
 printf("%d",total_cost);
 return 0;
}

# c-program-10
Conditional  statement program on hacker rank of 30 days of code
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("Weird");
    }
    if(n%2==0 && n>=2 && n<=5)
    {
        printf("Not Weird");
    }
    if(n%2==0 && n>=6 && n<=20)
    {
        printf("Weird");
    }
    if(n%2==0 && n>20)
    {
        printf("Not Weird");
    }
    return 0;
}


# c-program-11
data type on hacker rank of 30 days of code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int c;
    char p[100];
    double e;
    int i1;
    double d1;
    scanf("%d",&i1);
    scanf("%lf",&d1);
    scanf("%*[\n] %[^\n]",&p); 
    c=i+i1;
    e=d+d1;
    printf("%d",c);
    printf("\n%.1lf",e);
    printf("\n%s%s",s,p);
    return 0;
}

# c-program-12
loops on hacker rank 30 days of code
#include <stdio.h>
#include<math.h>
int main()
{
int n,i,result;
scanf("%d",&n);
if(n>=2 && n<=20)
{
for(i=1;i<=10;i++)
{
    printf("%d x %d = %d\n",n , i, (n*i));
}
}
return 0;
}


# c-program-13
factorial of a number by using function takes nothing return nothing
*****************************************************************************/

#include <stdio.h>
int factorial()
{
    int n ,i, fac=1;
    scanf("%d",&n);
    if(n!=0)
    for(i=1;i<=n;i++)
     fac=fac*i;
     printf("%d",fac);
}
   int main()
   {
       factorial();
   }

# c-program-14
printing pattern 1

#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows you want");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

# c-program-15
calculate nth term on hacker rank
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int soe;
  scanf("%d",&n);
  scanf("\n %d %d %d",&a,&b,&c);
  soe=(n-1)+(n-2)+(n-3);
  return (soe);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}


# c-program-16
swapping of two numbers using function

int swap(int *a, int *b)
{
  int c;
  c=*a;
  *a=*b;
  *b=c;
  return(*a,*b);
}

#include <stdio.h>
int main(int x, int y)
{
    scanf("%d %d",&x,&y);
    printf("Before swapping%d %d",x,y);
    swap(&x,&y);
    printf("\nafter swapping%d %d",x,y);
    return 0;
}

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









