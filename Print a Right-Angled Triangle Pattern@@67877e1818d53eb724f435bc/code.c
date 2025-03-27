#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Taking input for the number of rows

    for (int i = 0; i <= 1; i++) { // Loop from N to 1
        for (int j = n; j <= i; j++) { // Print i stars in each row
            printf("* ");
        }
        printf("\n"); // New line after each row
    }

    return 0;
}