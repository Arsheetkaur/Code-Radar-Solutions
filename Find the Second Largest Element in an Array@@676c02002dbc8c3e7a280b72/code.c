// Your code here...
# include<stdio.h>
# include<limits.h>
int main(){
    int arr[n];
    int n;
    int max =  INT_MAX;
    int smax = INT_MAX;
    for(i=0;i<=6;i++){
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i]&& max!=arr[i]){
            smax = arr[i];
        }
    }
    printf("%d ",max);
    return 0;
}