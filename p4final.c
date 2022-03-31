#include<stdio.h>
int input()
{
  int n;
  printf("enter the num  of elements\n");
  scanf("%d",&n);
  return n;
} 
int find_fibo(int n)
{
  int t1=0,t2=1;
  int next_term=t2;
  {
    for(int i=0;i<=n;i++)
    
  }

  
  return next_term;
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