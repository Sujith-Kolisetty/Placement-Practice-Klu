#include <stdio.h>

int main() {
    int n, pos, value;
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    int a[100];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to insert (1-%d): ", n+1);
    scanf("%d", &pos);
    
    printf("Enter value: ");
    scanf("%d", &value);

    for(int i = n; i >= pos; i--)
        a[i] = a[i-1];

    a[pos-1] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
