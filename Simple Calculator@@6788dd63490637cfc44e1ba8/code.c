// Your code here...
# include <stdio.h>

int main() {
    int num1, num2, result;
    char op;
    scanf("%d %d %c",&num1, &num2, &op);
    switch (op) {
        case '+':
        redult = num1 + num2;
        printf("%d\n", result);
        break;
        case '-':
        result = num1 - num2;
        printf("%d\n", result);
        break;
        case '*':
        result = num1 * num2;
        printf("%d\n", result);
        break;
        case '/':
        result = num1 / num2;
        printf("%d\n", result);
        break;
        default:
        printf("Erro\n");
    }
    return 0;
} 