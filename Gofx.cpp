#include<stdio.h>
#include<math.h>
int main(){
  float x,Fx,Gx,Gofx;

  printf("Enter the value of x:");
  scanf("%f",&x);

  Fx=3*pow(x,4)+2*sqrt(x)-2;
  Gx=5*pow(x,3)-4;

  Gofx=5*pow((5*pow(x,3)-4),4)+2*sqrt(5*pow(x,3)-4)-2;

  printf("The value of Gofx:%.2f\n",Gofx);
  return 0;


}