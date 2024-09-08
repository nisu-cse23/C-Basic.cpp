#include<stdio.h>
#include<math.h>
int main(){
    float gross,re,hea,hou,trans,net,AED;

    printf("Gross amount:");

    scanf("%f",&gross);

    re=0.05*gross;
    hea=750;
    hou=0.20*gross;
    trans=200;

    net=gross+hou+trans-re-hea;
    printf("***************\n");
    printf("Retirement plan:-%.2fAED\n",re);
    printf("Health Insurance :-%.2fAED\n",hea);
    printf("Houseing allowance:%.2fAED\n",hou);
    printf("Transportation Allowance:%.2fAED\n",trans);
    printf("*********************************************\n");

    printf("Net salary:%.2fAED\n",net);
    return 0;





}
