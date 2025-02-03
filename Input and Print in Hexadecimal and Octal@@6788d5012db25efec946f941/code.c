#include <stdio.h>

int main() {
    int num;

    //Taking integer input
    scanf("%d", &num);

    //Printing the hexadecimal representation
    printf("Hexadecimal: %X\n", num);

    //Priting the octal representation
    printf("Octal: %o\n", num);

    return 0;
}