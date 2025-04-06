#include <stdio.h>
int findpeak(int arr[], int n){
    for (int i = 1; i < n; i++){
        if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            return arr[i];
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