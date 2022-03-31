#include <stdio.h>
#include<math.h>
struct _point

{
  float x,y;
  
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
  Point p;
  printf("enter the values of x,y\n");
  scanf("%f %f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  Point p1,p2;
  p1=input_point();
  p2=input_point();
  l.p1=p1;
  l.p2=p2;
  
  return l;

}
void find_length(Line *l)
{ 
  
  l->distance=sqrt(((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x))+((l->p2.y-l->p1.y)*(l->p2.y-l->p1.y)));
}
void output(Line *l)
{
  printf("the distance is %f",l->distance);
}
int main()
{
  Point p1,p2;
  Line l;
  l=input_line();
  find_length(&l);
  output(&l);
  return 0;
}



