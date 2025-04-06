#include <stdio.h>
int checksort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        if (arr[i] <= arr[i+1]){
            continue;
        }
        else{
            return -1;
            break;
        }
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int r = checksort(arr,a);
    if (r==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}