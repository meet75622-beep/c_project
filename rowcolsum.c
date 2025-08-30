#include <stdio.h>
int main(){
    int rows, cols, p1, q1;
    printf("Enter the array's row size: "); scanf("%d",&rows);
    printf("Enter the array's column size: "); scanf("%d",&cols);
    int a[10][10];
    for(p1=0; p1<rows; p1++) for(q1=0; q1<cols; q1++){ printf("a[%d][%d] = ", p1,q1); scanf("%d",&a[p1][q1]); }
    int rowNo, colNo, sumRow=0, sumCol=0;
    printf("Enter row number: "); scanf("%d",&rowNo);
    printf("Elements of row %d: ", rowNo);
    for(q1=0; q1<cols; q1++){ printf("%d ", a[rowNo][q1]); sumRow+= a[rowNo][q1];}
    printf("\nThe sum of a row %d: %d\n", rowNo, sumRow);
    printf("\nEnter column number: "); scanf("%d",&colNo);
    printf("Elements of column %d: ", colNo);
    for(p1=0; p1<rows; p1++){ printf("%d ", a[p1][colNo]); sumCol+= a[p1][colNo]; }
    printf("\nThe sum of column %d: %d\n", colNo, sumCol);
    return 0;
}