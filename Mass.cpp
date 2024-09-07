#include<stdio.h>
int main(){
    float p,v,m,T;

    printf("Enter the value of p,v and T:");
    scanf("%f%f%f",&p,&v,&T);

    m=p*v/0.37*(T+460.00);
    printf("The value of mass:%.2f\n",m);
    return 0;
}
