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
int secondsmallest(int arr[], int n){
    int smallest = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] != smallest){
            return arr[i];
            break;
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
    int n = secondsmallest(arr,a);
    printf("%d",n);
}