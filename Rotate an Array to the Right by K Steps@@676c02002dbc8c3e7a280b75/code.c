#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k = k % a;
    int temp[100];
    for (int i = 0; i < k; i++){
        temp[i] = arr[a-k+i];
    }
    for (int i = k; i < a; i++){
        temp[i] = arr[i-k];
    }
    for (int i = 0; i < a; i++){
        arr[i] = temp[i];
    }
    for (int i = 0; i < a; i++){
        printf("%d ",arr[i]);
    }
}