#include <stdio.h>
int main(){
    char s[200]; int start=0, end=ln-1, ln=0, pal=1;
    printf("Enter any string: ");
    fgets(s,200,stdin);
    while(s[ln]!='\0' && s[ln]!='\n') ln++;
    end=ln-1;
    while(start<end){ if(s[start]!=s[end]){ pal=0; break; } start++; end--; }
    if(pal) printf("The given string is a Palindrome.\n"); else printf("The given string is not a Palindrome.\n");
    return 0;
}