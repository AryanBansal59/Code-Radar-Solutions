#include <stdio.h>
int findpeak(int arr[], int n){
    if (arr[0] > arr[1]){
        return arr[0];
    }
    else if (arr[n-1] > arr[n-2]){
        return arr[n-1];
    }
    else{
        for (int i = 1; i < n-1; i++){
            if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int peak = findpeak(arr,a);
    printf("%d",peak);
}