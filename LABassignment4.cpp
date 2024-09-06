#include<stdio.h>
int main(){
    float r,area,circum;
    printf("Enter the values of radius:");
    scanf("%f",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
    printf("The value of area:%.2f\n",area);
    printf("The value of circum:%.2f\n",circum);
    return 0;


}