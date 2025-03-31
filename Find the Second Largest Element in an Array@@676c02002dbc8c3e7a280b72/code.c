#include <stdio.h>
void bubbleSort(int arr[], int n){
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
int findsecondlargest(int arr[], int n){
    int largest = arr[n-1];
    for (int i = n-1; i>=0; i++){
        if (arr[i] < largest){
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
    int n = a;
    bubbleSort(arr,n);
    printf("%d",arr[n-2]);
}