// Your code here...
# include <stdio.h>
# include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
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