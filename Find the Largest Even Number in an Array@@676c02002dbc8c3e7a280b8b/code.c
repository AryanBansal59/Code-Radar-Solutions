#include <stdio.h>
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if (arr[j] % 2 == 0){
                if (arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,a);
    printf("%d",arr[a-1]);
}