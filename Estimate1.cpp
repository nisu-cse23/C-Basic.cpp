#include<stdio.h>
#include<math.h>

int main(){
     float x,t,p,q,r,m;

     printf("Enter the value of x and t:");
     scanf("%f%f",&x,&t);

     p=24*t-10*t;
     q=sqrt(x*t)+100;
     r=pow(3*t/(6*pow(x,2)),2);
     m=sqrt(p/q)+r;
     printf("The value of m:%.2f\n",m);
     return 0;



}