#include<stdio.h>
#include <stdlib.h>
char l;
void match(char c)
   {
    if(l==c)
    l=getchar();
    else 
   {   
    printf("Invalid Input\n"); 
    exit(0);
    }
   }
void B()
  {
    if(l=='b')
  {
    match('b'); 
  }
    else 
  {   
    printf("Invalid Input\n"); 
    exit(0);
   }
  }
void A()
 {
    if(l=='a')
    {
    match('a');
    B();
    }
    else
    return;
  }
void S()
  {
    A();
    A();
  }
int main()
{    
    char input[10];
    printf("Enter String with $ at the end\n");
    l=getchar();
    S();
    if(l=='$')
    {
      printf("\nParsing Successful\n");
    }
    else  
    {
      printf("Invalid Input\n");
    }  
}