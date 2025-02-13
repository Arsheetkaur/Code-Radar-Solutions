// Your code here...
# include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14;

    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area: %2.f\n", area);
    return 0;
}

