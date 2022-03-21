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
    a[i]=i;
    a[1]=0;
}
void erotosthenes_sieve(int n,int a[n]) 

{
  int i=0;
  while(i<sqrt(n))
  {
    for()
  }

  void out_put(int n,int a[n])
  {
    int i;
    printf("prime no are:/n");
    for(i=1;i<n;i++)
    printf("%d",a[i]);
  }


   
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,&a[n]);
    erotosthenes_sieve(n,&a[n]);
     out_put(n,&a[n]);
        return 0;
}
