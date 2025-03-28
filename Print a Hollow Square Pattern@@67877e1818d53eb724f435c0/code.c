// Your code here...
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (j=1;j<=n;j++){
            if (i % 2==0) printf(" ");
        }
        for (k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}