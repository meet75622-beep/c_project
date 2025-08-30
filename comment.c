#include <stdio.h>
int main(){
    int scr; char gd;
    printf("Enter score: "); scanf("%d",&scr);
    gd = (scr>=90)?'A':(scr>=75)?'B':(scr>=60)?'C':(scr>=45)?'D':(scr>=33)?'E':'F';
    printf("Your grade is %c. ", gd);
    switch(gd){
        case 'A': printf("Excellent work!\n"); break;
        case 'B': printf("Well done!\n"); break;
        case 'C': printf("Good job!\n"); break;
        case 'D': printf("You passed, but do better.\n"); break;
        case 'E': printf("You passed. Try harder.\n"); break;
        default: printf("Sorry, you failed.\n");
    }
    return 0;
}