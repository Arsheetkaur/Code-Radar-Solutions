// Your code here...
# include <stdio.h>

int main() {
    int n=4;
    scanf("%d", &n);
    if ( n % 1 == 0){
        printf("Prime\n", n);
    }
    else {
        printf("Not Prime\n", n);
    }
    return 0;
} 