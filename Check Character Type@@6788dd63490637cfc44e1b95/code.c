// Your code here...
# include <stdio.h>
# include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    }
    else if (isaplha(ch)) {
        printf("Consonant\n");
    }
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }
    return 0;
}