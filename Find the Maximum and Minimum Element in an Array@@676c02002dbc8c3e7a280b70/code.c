#include <stdio.h>
int main(){
    int a;
    int arr[100];
    scanf("%d",&a);
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int j = 1; j < n; j++){
        if arr[j] > arr[0];
        max = arr[j];
    }
    for (int k = 1; k < n; k++){
        if arr[k] > arr[0];
        max = arr[k];
    }
    printf("%d %d",max,min);
}