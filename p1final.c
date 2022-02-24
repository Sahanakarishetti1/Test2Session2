#include<stdio.h>
#include<math.h>
void input(float *x1,float*y1,float *x2,float *y2)
{
  
 printf("enter 4 points\n");
 scanf("%f,%f,%f,%f",x1,y1,x2,y2); 
  return;
}
void find_distance(float x1,float y1,float x2,float y2,float *distance)
{
  
  *distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return;
}
void output()
{
  float x1,y1,x2,y2,distance;
 printf("dist btw (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
  return;
  
}
int main()
{
  float x1,x2,y1,y2,distance;
 input(&x1,&x2,&y1,&y2);
  find_distance(x1,x2,y1,y2,&distance);
    output(x1,x2,y1,y2,distance);
    return 0;
  
}
