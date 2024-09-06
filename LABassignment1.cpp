#include<stdio.h>
int main(){
    int a,b,add,sub,multi;
    float div;
    printf("Enter the two integers:");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    div=a/b;
    multi=a*b;
    printf("The value of add:%d\n",add);
    printf("The value of sub:%d\n",sub);
    printf("The value of div:%.2f\n",div);
    printf("The value of multi:%d\n",multi);
    return 0;
}
