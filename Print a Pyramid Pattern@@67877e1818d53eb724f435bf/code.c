// Your code here...

# include <stdio.h>

int main() 
{
    int N;
    scanf("%d\n", &N);

    for (int i = N; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }       
        printf("\n");
    }
    return 0;
}