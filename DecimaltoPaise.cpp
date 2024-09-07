#include<stdio.h>
int main(){
      float decimal,paise;

      printf("Enter the value of decimal:");
      scanf("%f",&decimal);
      
      paise=100*decimal;
     
     printf("The value of paise:%.2f\n",paise);
     return 0;




}