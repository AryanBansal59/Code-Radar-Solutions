#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int maxeven = -1;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            if (abs(arr[i]) > maxeven){
                maxeven = arr[i];
            }
        }
    }
    printf("%d",maxeven);
}