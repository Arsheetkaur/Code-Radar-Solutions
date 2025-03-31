// Your code here...
# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=n;i--){
        for(int j=i;j>=n-1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}