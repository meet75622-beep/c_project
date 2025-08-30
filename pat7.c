#include <stdio.h>
int main(){
    int i,j,size=6;
    for(i=1;i<=size;i++){ for(j=1;j<=size;j++){ if(i==1 || j==1 || j==size-i+1) printf("* "); else printf("  "); } printf("\n"); }
    return 0;
}