#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter the points x1,y1,x2,y2\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
*area=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("The distance between two points (%f,%f)and (%f,%f) is %f",x1,y1,x2,y2,area);
}
void main()
{
  float a,b,x1,x2,y1,y2;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&a);
  output(x1,x2,y1,y2,a);
  
}