#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2,y1,y2,D;

    printf("The value of x1,x2,y1 and y2:");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);

    D=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    
    printf("The value of distance:%.2f\n",D);
    return 0;
}