#include <stdio.h>
int main(){
    float cval, fval;
    printf("Enter Celsius: ");
    scanf("%f",&cval);
    fval = (9.0/5.0)*cval + 32.0;
    printf("Fahrenheit: %.1f\n", fval);
    return 0;
}