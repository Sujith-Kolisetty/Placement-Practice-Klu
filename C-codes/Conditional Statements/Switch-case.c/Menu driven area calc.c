#include <stdio.h>
int main() {
    int ch;
    float a,b;
    scanf("%d",&ch);
    switch(ch){
        case 1: scanf("%f",&a); printf("%.2f",3.14*a*a); break;
        case 2: scanf("%f %f",&a,&b); printf("%.2f",a*b); break;
        case 3: scanf("%f %f",&a,&b); printf("%.2f",0.5*a*b); break;
        default: printf("Invalid");
    }
    return 0;
}
