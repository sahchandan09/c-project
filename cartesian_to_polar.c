#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float x,y,r,t,angle;
    printf("put the cartesian value of x:");
    scanf("%f",&x);
    printf("\nput the cartesian value of y:");
    scanf("%f",&y);
    r=sqrt(x*x+y*y);
    t=atan(y/x);
    angle=180*(t/pi);
    printf("\npolar form of x and y are r=%.2f, Angle in degree=%.f ",r,angle);
    return 0;

}