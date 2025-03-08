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
        if (num2 == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("%d\n", num1 / num2);
        }
        break;
        default:
        printf("Error\n");
    }
    return 0;
    
} 