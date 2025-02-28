// Your code here...
# include <stdio.h>

int main() {
    int n;
    int prime = 0;
    for (int i = 2; i < n; i++)
    {
       if(n%i == 0) {
        prime = 1;
       } 
    }
    if(prime){
        printf("Not Prime\n", n);
    }
    else {
        printf("Prime\n", n);

    }
    return 0;
}