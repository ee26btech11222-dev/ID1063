#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int a[n];
    printf("Enter the values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Check for duplicate elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("Repeated value: %d, Positions: %d, %d\n", a[i], i, j);
                return 0;
            }
        }
    }

    printf("The array has no repeated values.\n");
    return 0;
}
	


