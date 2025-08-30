#include <stdio.h>
int main(){
    long m; 
    printf("Enter any number: "); scanf("%ld",&m);
    int last = (int)(m%10);
    while(m>=10) m/=10;
    int first = (int)m;
    printf("The sum of the first and the last digit: %d\n", first+last);
    return 0;
}