#include<stdio.h>
int main(){
    float n,sum;

    printf("Enter the value of n:");
    scanf("%f",&n);

    sum=(n/3.0)*(4*n*n-1);

    printf("The value of sumSeries:%.2f\n",sum);
    return 0;
}