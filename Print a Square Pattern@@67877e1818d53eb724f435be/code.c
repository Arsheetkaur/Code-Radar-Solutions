// Your code here...
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            for (k=1;k<=2*n-1;k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
