// Your code here...
# include <stdio.h>

int main() {
    int num;
    scanf ("%d", &num);
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible \n");
    }
    else {
        printf("Not divisible \n");
    }
    return 0;

}