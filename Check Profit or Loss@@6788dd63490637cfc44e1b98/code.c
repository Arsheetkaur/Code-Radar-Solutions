// Your code here...
# include <stdio.h>

int main() {
    float cost_price, selling_price;
    scanf("%f %f", &cost_price, &selling_price);
    
    if (cost_price < selling_price) {
        printf("Profit \n");
    }
    else if (cost_price > selling_price) {
        printf("Loss \n");
    }
    else {
        printf("No Profit No Loss");
    }
    return 0;
    }
