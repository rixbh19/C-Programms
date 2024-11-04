#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1; // Determines the size of the square matrix

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Calculate the minimum distance from the edges
            int min = i < j ? i : j;
            min = min < size - i ? min : size - i - 1;
            min = min < size - j - 1 ? min : size - j - 1;

            // Print the appropriate number
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}