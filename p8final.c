#include<stdio.h>
#include <math.h>
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
struct _polygon
{
int n;
Line l[100];
float perimeter;
};
typedef struct _polygon Polygon;
int input_n()
{
  int n; 
  printf("enter the number of sides of polygon\n");
  scanf("%d",&n);
  return n;
  
}
Line input_line()
{
  Point p1,p2;
 Line l1;
  
  printf("enter the points p1\n");
  scanf("%f%f",&p1.x,&p1.y);
  printf("enter the points p2\n");
  scanf("%f%f",&p2.x,&p2.y);
  l1.p1=p1;
  l1.p2=p2;
  l1.distance=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
  
  return l1; 
  
}
void input_n_lines(int n,Line l[n])
{
  for(int i=0;i<n;i++)
    {
      l[i]=input_line();
      
    }
}
void input_polygon(int n,Polygon *p)
{
  p->n=n;
  input_n_lines(n,p->l);
  
}
void find_perimeter(int n,Polygon *p)
{
  p-> perimeter=0;
  for(int i=0;i<n;i++)
    {
      p->perimeter=p->perimeter+p->l[i].distance;
    }
}
void output(Polygon *p)
{
  printf("the perimeter of polygon is as follows %f\n",p->perimeter);
}

int main()
{
  
  Polygon p;
  int n=input_n();
  
    
    input_polygon(n,&p);
    find_perimeter(n,&p);
    output(&p);
  
}
