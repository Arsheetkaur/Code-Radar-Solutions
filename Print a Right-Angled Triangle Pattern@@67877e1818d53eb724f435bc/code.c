#include <stdio.h>

int main() {
    int n;

    // Take input for the number of rows without any prompt message
    scanf("%d", &n);

    // Loop to print the rows
    for (int i = 1; i <= n; i++) {
        // Loop to print stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
