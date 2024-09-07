#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;

    printf("Enter the values of a and b:");
    scanf("%f%f",&a,&b);

    c=sqrt(a*a+b*b);

    printf("The value of hypotenuse:%.2f\n",c);
    return 0;
}