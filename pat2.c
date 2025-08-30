#include <stdio.h>
int main(){
    int i,j; int v=11;
    for(i=1;i<=4;i++){ for(j=1;j<=i;j++) printf("%d ", v++); printf("\n"); }
    return 0;
}