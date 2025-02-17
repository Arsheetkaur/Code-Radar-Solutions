// Your code here...
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a || b % 3 == 0 && a || b % 5 == 0) {
        printf("Divisible by Both");
    }
    else if (a || b % 3 == 0) {
        printf("Divisible by 3");
    }
    else if (a || b % 5 == 0) {
        printf("Divisible by 5");
    }
    else {
        printf("Not Divisible");
    }
    return 0;
}