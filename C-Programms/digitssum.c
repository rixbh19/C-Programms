#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a five digit integer: ");
    scanf("%d", &number);

    for (int i = 0; i < 5; i++) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}