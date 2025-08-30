#include <stdio.h>
int main(){
    int N, p1;
    printf("Enter the array's size: ");
    scanf("%d",&N);
    int a[100];
    for(p1=0; p1<N; p1++){ printf("a[%d] = ", p1); scanf("%d",&a[p1]); }
    printf("Negative elements from an Array: ");
    for(p1=0; p1<N; p1++) if(a[p1]<0) printf("%d ", a[p1]);
    printf("\n");
    return 0;
}