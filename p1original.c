#include <stdio.h>
void input(float *base,float *height)
{
 printf("enter the base and height\n");
scanf("%f",base);
scanf("%f",height);
}
void find_area(float base,float height,float*area)
{
  *area=((base*height)/2);
}
void output(float base,float height,float area)
{
  printf("the area of triangle with base %f  and %f is %f",base,height,area);
}
int main()
{
  float area,base,height;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}