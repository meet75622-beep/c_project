#include <stdio.h>
int main(){
    char s[300]; int i=0; int freq[256]={0};
    printf("Enter any string: ");
    fgets(s,300,stdin);
    while(s[i]!='\0'){ unsigned char c=s[i]; if(c!='\n') freq[c]++; i++; }
    printf("Frequency of each letter:\n");
    for(i=0;i<256;i++) if(freq[i]>0) printf("%c => %d\n", i, freq[i]);
    return 0;
}