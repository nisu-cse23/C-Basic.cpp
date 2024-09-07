#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,x1,x2;

    printf("Enter the value of a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    
    d=pow(b,2)-4*a*c;
 
   if(d>0){
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    printf("The root1:%.2f\n",x1);
    printf("The root2:%.2f\n",x2);
   }
   else if(d==0){
    x1=x2=-b/2*a;
    printf("The root1:%.2f\n",x1);
    printf("the root2:%.2f\n",x2);

   }
   else
   {
    printf("The root1 and root2 are immaginary");

   }
   return 0;
}