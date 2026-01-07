#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d", sum);
    return 0;
}