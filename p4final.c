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
  int a=0,b=1,sum;
  if(n>0)
  {
    sum=a+b;
    a=b;
    b=sum;
    printf("%d",sum);
    find_fibo(n-1);

  }
  
}
void output(int n,int fibo)
{
  int a,b;
printf("fibo series:");
  printf("%d %d",0,1);
  find_fibo(n-2);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}