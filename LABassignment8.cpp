#include<stdio.h>
#include<math.h>
int main(){
    float x,y,p;
    printf("Enter the value of x:");
    scanf("%f",&x);

    p=(x-1)/x;
    y=p+pow(p,2)/2.0+pow(p,3)/3.0+pow(p,4)/4.0;

    printf("the value of y:%.2f\n",y);
    return 0;
}  