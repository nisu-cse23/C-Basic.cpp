#include<stdio.h>
int main(){
    int x;

    printf("Enter the value of x:");
    scanf("%d",&x);

    if(x%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}
