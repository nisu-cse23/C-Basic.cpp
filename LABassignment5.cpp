#include<stdio.h>
#include<math.h>

int main(){
    float r,vol,area;
     printf("Enter the value of radius:");
     scanf("%f",&r);
     
     vol=(4*3.14*pow(r,3))/3.0;
     area=4*3.14*pow(r,2);

     printf("The value of volume:%.2f\n",vol);
     printf("The value of area :%.2f\n",area);
     return 0;

}