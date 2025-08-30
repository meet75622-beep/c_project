#include <stdio.h>
int main(){
    char s[200]; int ln=0; char *pt;
    printf("Enter any string: ");
    fgets(s,200,stdin);
    pt=s; while(*pt!='\0' && *pt!='\n'){ ln++; pt++; }
    printf("The length of a string is: %d\n", ln);
    return 0;
}