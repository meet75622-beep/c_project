#include <stdio.h>
int main(){
    int rows, cols, p1, q1;
    printf("Enter the array's row & column size: ");
    scanf("%d %d",&rows,&cols);
    int a[10][10];
    for(p1=0; p1<rows; p1++) for(q1=0; q1<cols; q1++){ printf("a[%d][%d] = ", p1,q1); scanf("%d",&a[p1][q1]); }
    printf("The transpose matrix of an array:\n");
    for(q1=0; q1<cols; q1++){ for(p1=0; p1<rows; p1++) printf("%d ", a[p1][q1]); printf("\n"); }
    return 0;
}