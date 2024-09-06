#include<stdio.h>
int main(){
   float F,C;

   printf("Enter the value of Fahrenhit:");
   scanf("%f",&F);
   
   C=(5.0/9.0)*(F-32);
   printf("The value of Celcilus :%.2f",C);
   return 0;
   
}