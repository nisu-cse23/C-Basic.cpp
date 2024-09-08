#include<stdio.h>
int main(){
    float gross,fe,sta,re,hea,net;

    printf("Gross amount:");
    scanf("%f",&gross);

    fe=0.15*gross;
    sta=0.035*gross;
    re=0.05*gross;
    hea=750;

    net=gross-fe-sta-re-hea;
    
    printf("Federal Income Tax:%.2f dirhams\n",fe);
    printf("State Tax:%.2f dirhams\n",sta);
    printf("Retirement Plan:%.2f dirhams\n",re);
    printf("Health Insurance:%.2f dirhams\n",hea);
    printf("Net salary:%.2f dirhams\n",net);
    return 0;

}