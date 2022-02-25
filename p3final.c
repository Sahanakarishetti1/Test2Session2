#include <stdio.h>
#include <math.h>
int input_number()
{
int n;
printf("enter the num\n");
scanf("%d",&n);
return n;
}
int is_prime(int n)
{
  int prime=0;
  for(int i=2;i<=n;i++)
    {
      if(n%i==0)
        return 0;
      }
  return 1;
}
void output(int n,int prime)
{
  if(prime==0)
  {
    printf("%d is a prime num\n",n);
  }
  else
  {
    printf("%d is not a prim num\n",n);
  }
}
int main()
{
  int n,prime;
  n=input_number();
  prime=is_prime(n);
  output(n,prime);
  return 0;
}
