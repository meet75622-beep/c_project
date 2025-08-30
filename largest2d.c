#include <stdio.h>
int main(){
    int rows, cols, p1, q1; 
    printf("Enter the array's row size: "); scanf("%d",&rows);
    printf("Enter the array's column size: "); scanf("%d",&cols);
    int a[10][10]; int big;
    for(p1=0; p1<rows; p1++){ for(q1=0; q1<cols; q1++){ printf("a[%d][%d] = ", p1,q1); scanf("%d",&a[p1][q1]); if(p1==0&&q1==0) big=a[0][0]; if(a[p1][q1]>big) big=a[p1][q1]; } }
    printf("The largest element is: %d\n", big);
    return 0;
}