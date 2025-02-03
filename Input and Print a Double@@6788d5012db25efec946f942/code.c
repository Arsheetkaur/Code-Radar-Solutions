#include <stdio.h>

int main() {
    double num;

    //Taking a double as input
    scanf("%lf", &num);

    //Printing the entered double 
    printf("You entered: %.4lf\n", num);

    return 0;
}