// Your code here...
# include <stdio.h>

int main() {
    char ch;
    scanf("%ch", &ch);
    if (isupper(ch)) {
        printf("Uppercase\n");
    }
    else if (islower(ch)) {
        printf("Lowercase\n");
    }
    else {
        printf("Not an alphabet\n");
    }
    return 0;
}