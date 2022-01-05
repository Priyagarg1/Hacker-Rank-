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

