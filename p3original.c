#include<stdio.h>
int input_number( int a)
{
 
  printf("Enter any number ");
  scanf("%d",&a);
}
int is_prime(int n)
{
  int m=n/2;
  for(i=1;i<=m;i++)
    {
     if(n%i==0) 
     {
       
     }
      else
     {
        printf("Prime");
     }
    }
}
void output(int n,int pr)
{
if(pr == 0)
  printf("The number  is prime");
  else 
  printf("The is not prime");
}
void main()
{
  int a,b,n;
  input_number(n);
  b=is_prime(a);
  output(a,b);
}
