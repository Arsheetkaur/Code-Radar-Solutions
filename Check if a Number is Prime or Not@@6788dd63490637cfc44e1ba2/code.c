// Your code here...
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if ( n % 1 == 0 && n != 2){
        printf("Prime\n", n);
    }
    else {
        printf("Not Prime\n", n);
    }
    return 0;
} 