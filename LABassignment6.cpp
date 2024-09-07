#include<stdio.h>
#include<math.h>

int main(){
    float x,y,z,total,average;

    printf("Enter the values of x,y and z:");
    scanf("%f%f%f",&x,&y,&z);

    total=x+y+z;
    average=(x+y+z)/3.0;
     
     printf("The total marks:%.2f\n",total);
     printf("The average marks:%.2f\n",average);
     return 0;
     

}