// Your code here...
# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i=0;i<=n;i++){
        int a = 1;
        for(int j=0;j<=n-i;j++){
            printf("");
        }
        for(int j=1;j<=n-i;j++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}