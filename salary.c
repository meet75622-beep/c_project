#include <stdio.h>
int main(){
    float bpay, hp, dp, tp, tot;
    printf("Base salary: "); scanf("%f",&bpay);
    printf("HRA %%: "); scanf("%f",&hp);
    printf("DA %%: "); scanf("%f",&dp);
    printf("TA %%: "); scanf("%f",&tp);
    tot = bpay + (bpay*hp/100.0) + (bpay*dp/100.0) + (bpay*tp/100.0);
    printf("Gross Salary: Rs. %.0f\n", tot);
    return 0;
}