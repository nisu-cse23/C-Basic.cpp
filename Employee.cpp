#include<stdio.h>
int main(){
    float gross,net,hour,rate,bonus,Tax;

    printf("Enter the Value of hour and rate:");
    scanf("%f%f",&hour,&rate);

    
    gross=hour*rate;
    
    bonus=0.07*gross;
    Tax=0.05*gross;

    net=gross+bonus-Tax;

    printf("The net pay:%.2f\n",net);
    return 0;

}