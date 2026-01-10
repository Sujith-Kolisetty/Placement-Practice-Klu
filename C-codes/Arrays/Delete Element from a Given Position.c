#include <stdio.h>

int main() {
    int n, pos;
    
    printf("Enter size: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete (1-%d): ", n);
    scanf("%d", &pos);

    for(int i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
