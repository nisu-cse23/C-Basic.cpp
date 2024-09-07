#include<stdio.h>
int main(){
    float fixedSalary,finalSalary,bonus,tax;

    printf("Enter the  salary:");
    scanf("%f",&fixedSalary);


    bonus=0.15*fixedSalary;
    tax=0.12*fixedSalary;

    finalSalary=fixedSalary+bonus-tax;

    printf("The final salary:%.2f\n",finalSalary);
    return 0;
}