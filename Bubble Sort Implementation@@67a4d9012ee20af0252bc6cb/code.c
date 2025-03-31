// Your code here...
#include<stdio.h>
#include<stbool.h>

int main(){
    int arr[5] = {5,40,2,1,3};
    int n = 55;
    for(int i=0;i<5;i++){
        printf("%d", arr[i]);
    }

    // bubble sort
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                temp = arr[j+1];
                flag = false;
            }
        }
        if (flag==true) break;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}