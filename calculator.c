#include <stdio.h>
int main(){
    int choice; long a,b;
    while(1){
        printf("Press 1 for +\n2 for -\n3 for *\n4 for /\n5 for %\n0 for the exit\n");
        printf("Enter your choice: ");
        if(scanf("%d",&choice)!=1) return 0;
        if(choice==0) break;
        printf("Enter the first number: "); scanf("%ld",&a);
        printf("Enter the second number: "); scanf("%ld",&b);
        switch(choice){
            case 1: printf("Addition of %ld and %ld is %ld\n",a,b,a+b); break;
            case 2: printf("Subtraction of %ld and %ld is %ld\n",a,b,a-b); break;
            case 3: printf("Multiplication of %ld and %ld is %ld\n",a,b,a*b); break;
            case 4: if(b!=0) printf("Division of %ld and %ld is %ld\n",a,b,a/b); else printf("Cannot divide by zero\n"); break;
            case 5: if(b!=0) printf("Modulus of %ld and %ld is %ld\n",a,b,a%b); else printf("Cannot modulus by zero\n"); break;
            default: printf("Invalid option\n");
        }
        printf("\n");
    }
    return 0;
}