// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Loop to print each row
    for (int i = 1; i <= n; i++) {
        // Loop to print each column (for every row)
        for (int j = 1; j <= n; j++) {
            // Print star for borders (first or last row, first or last column)
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
