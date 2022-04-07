#include<stdio.h>
#include<string.h>
int input_string(char *a,char *b)
{
  printf("enter the string\n");
  scanf("%s",a);
  printf("enter the substring\n");
  scanf("%s",b);
  
  
}
int str_substr(char *string,char *substring)
{ 
   int k,n,b;
  for ( int i=0;i<=strlen(string)-strlen(substring)&& k!=strlen(substring);i++)
    {
      b=i;
      for(k=0;substring[k]!='\0';)
      {
        if(string[b]==substring[k]){
          b++;
          k++;
          n=i;
        }
        else{
          break;
        }
      }
    }
  return n;

     
}
void output(char *string,char *substring,int index)
{
  printf("the substring %s of string %s is %d",string,substring,index);
}
int main()
{
  int index;
  char a[20],b[20];
  input_string(a,b);
  index=str_substr(a,b);
  output(a,b,index);
  return 0;
  }
  
  
  
