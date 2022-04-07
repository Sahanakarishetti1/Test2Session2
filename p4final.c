#include<stdio.h>
int input()
{
  int n;
  printf("enter the num  \n");
  scanf("%d",&n);
  return n;
} 
int find_fibo(int n)
{
  
  int a=0;
  int b=1;
  int fibo=a+b;
  

  while (fibo<= n) {
    
    a= b;
    b = fibo;
    fibo= a+ b;
  }
  }
  
  

void output(int n,int fibo)
{
  printf("the %dth fibonacci no is %d/n",n,fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}