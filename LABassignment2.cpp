#include<stdio.h>
int main(){
    float inch,cm;
    printf("Enter the value of inch scale:");
    scanf("%f",&inch);
   cm=2.54*inch;
   printf("The value of cm scale:%.2f",cm);
   return 0;
}