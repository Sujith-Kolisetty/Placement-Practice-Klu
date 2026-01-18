#include <stdio.h>
int main() {
    int ch,bal=1000,amt;
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("%d",bal); break;
        case 2: scanf("%d",&amt); bal+=amt; printf("%d",bal); break;
        case 3: scanf("%d",&amt); if(amt<=bal){bal-=amt; printf("%d",bal);} else printf("Insufficient"); break;
        case 4: break;
        default: printf("Invalid");
    }
    return 0;
}
