#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Next Greater Element Array:\n");

    for(int i = 0; i < n; i++) {
        int next = -1;
        for(int j = i + 1; j < n; j++)
            if(a[j] > a[i]) {
                next = a[j];
                break;
            }

        printf("%d ", next);
    }

    return 0;
}
