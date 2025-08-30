#include <stdio.h>
int main(){
    long n; int cnt=0;
    printf("Enter any number: "); scanf("%ld",&n);
    if(n==0) cnt=1;
    while(n!=0){ n/=10; cnt++; }
    printf("Total number of digits: %d\n", cnt);
    return 0;
}