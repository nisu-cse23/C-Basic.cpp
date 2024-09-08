#include<stdio.h>
#include<math.h>

int main(){
    float x,Fx,Gx,Fogx;

    printf("Enter the value of x:");
    scanf("%f",&x);

    Fx=4*pow(x,2)+2*sqrt(x)-3;
    Gx=7*x-6;
    Fogx=4*pow((7*x-6),2)+2*sqrt(7*x-6)-3;

    printf("The value of Fogx:%.2f\n",Fogx);
    return 0;

}