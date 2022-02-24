#include <stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of array");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=1;
  a[0]=0;
  a[1]=0;
}
void erotosthenesieve(int n,int a[n]) 

{
  int i=2;
  while(i<sqrt(n))
    {
      while(a[i]==0) i++;
      for(int k=i+1; i<n;k==i)
        a[k]=0;
    }
}
void display(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i] !=0)
        printf("%d",a[i]);
    }

printf("\n");
  } 
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(a[n]);
    erotosthenes_sieve(n,a[n]);
      output(n,a[n]);
        return 0;
}
