// Your code here...
# include <stdio.h>

int main() {
    int cost_price, selling_price;
    scanf("%d %d", &cost_price, &selling_price);
    
    if (cost_price < selling_price) {
        printf("Profit");
    }
    else {
        printf("Loss");
    }
    return 0;
    }
