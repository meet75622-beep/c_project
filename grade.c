#include <stdio.h>
int main(){
    int scr; char gd;
    printf("Enter score out of 100: ");
    scanf("%d",&scr);
    gd = (scr>=90)?'A':(scr>=75)?'B':(scr>=60)?'C':(scr>=45)?'D':(scr>=33)?'E':'F';
    printf("Your grade is %c\n", gd);
    return 0;
}