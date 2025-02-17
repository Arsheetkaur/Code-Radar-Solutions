// Your code here...
# include <stdio.h>

int main() {
    int a>0;
    scanf("%d", &a);
    if (a > 1 && a % 1 == 0) {
        printf("Prime\n");
    }
    else {
        printf("Not Prime\n");
    }
    return 0;
}