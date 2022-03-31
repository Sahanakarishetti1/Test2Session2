/*
Write a program find whether a given number is a prime number.
int input_number();
int is_prime(int n);
void output(int n, int is_prime);
*/

#include <stdio.h>
#include <math.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

int isprime(int n)
{
  
  for(int i= 2; i<= n;i++)
    {
    if(n%i==0){
      return 0;
      }
    else{
      return 1;
    }
  }
  }
 
void output(int n, int isp)
{
  if(isp == 0)
    printf("%d is not a prime number\n",n);
  else
    printf("%d is a prime number\n",n);
}

int main()
{
  int n,isp;
  n= input();
  isp=isprime(n);
  output(n,isp);
  return 0;
  }

