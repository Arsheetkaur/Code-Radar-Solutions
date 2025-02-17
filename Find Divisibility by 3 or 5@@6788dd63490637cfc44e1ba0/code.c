// Your code here...
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a || b % 3 == 0 && a || b % 5 == 0) {
        printf("divisible");
    }
    else {
        printf("Not Divisible");
    }
    return 0;
}