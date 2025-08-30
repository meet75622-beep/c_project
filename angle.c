#include <stdio.h>
int main(){
    int p, q, r;
    printf("First angle: "); scanf("%d",&p);
    printf("Second angle: "); scanf("%d",&q);
    r = 180 - (p+q);
    printf("Third angle: %d\n", r);
    return 0;
}