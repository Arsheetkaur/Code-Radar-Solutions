// Your code here...
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (j=1;j<=2*n-1;j++){
           printf("* "); 
        }
    }
    return 0;
}
