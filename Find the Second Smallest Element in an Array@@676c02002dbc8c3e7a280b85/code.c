#include <stdio.h>
void bubblesort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        if (arr[i] < arr[i+1]){
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
    bubblesort(arr,a);
    int x = printarray(arr,a);
    printf("%d",x);
}