#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,d,p,q,r,m;

    printf("Enter the a ,b,c and d:");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    p=a-b;
    q=pow((c+4*d),2);
    r=c+d;
    m=sqrt(pow(p,2)/q)+sqrt(sqrt(p/r));

    printf("The value of m:%.2f\n",m);
    return 0;

}