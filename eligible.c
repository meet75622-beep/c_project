#include <stdio.h>
int main(){
    int scr; char gd;
    printf("Enter score: "); scanf("%d",&scr);
    gd = (scr>=90)?'A':(scr>=75)?'B':(scr>=60)?'C':(scr>=45)?'D':(scr>=33)?'E':'F';
    if(gd=='A'||gd=='B'||gd=='C'||gd=='D'||gd=='E')
        printf("Your grade is %c. Congratulations! You are eligible for the next level.\n", gd);
    else
        printf("Your grade is %c. Please try again next time.\n", gd);
    return 0;
}