// Your code here...
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp = n - 1;
    for(int i=1;i<=n;i++){
        int a = i - 1;
        for(int q=1;q<=nsp;q++){
            printf("");
        }
        for(int j=1;j<=n-i;j++){
            printf("");
        }
        for(int k=1;k<=i-1;k++){
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}