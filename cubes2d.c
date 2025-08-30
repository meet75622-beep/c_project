#include <stdio.h>
int main(){
    int n,i,j; 
    printf("Enter array's size: "); scanf("%d",&n);
    int a[10][10];
    for(i=0;i<n;i++) for(j=0;j<n;j++){ printf("a[%d][%d] = ",i,j); scanf("%d",&a[i][j]); }
    printf("Cubes of all elements:\n");
    int *p = &a[0][0];
    for(i=0;i<n*n;i++){ int v=*(p+i); printf("%d ", v*v*v); if((i+1)%n==0) printf("\n"); }
    return 0;
}