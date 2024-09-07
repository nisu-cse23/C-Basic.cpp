#include<stdio.h>
int  main(){
    float n,sum;

    printf("Enter the value of n:");
    scanf("%f",&n);

    sum=(2.0/3.0)*n*(n+1)*(2*n+1);

    printf("The value of sum series:%.2f\n",sum);
    return 0;

    

}