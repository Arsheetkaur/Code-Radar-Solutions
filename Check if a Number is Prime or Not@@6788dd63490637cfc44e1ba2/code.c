// Your code here...
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if ( n % 1 == 0){
        printf("Prime", n);
    }
    else {
        printf("Not Prime");
    }
    return 0;

}