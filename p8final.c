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
struct _line Line;
struct _polygon
{
int n;
Line l[100];
}
