#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < a; i++){
        if (arr[i] == 0){
            arr[a-1] = arr[i];
        }
    }
    for (int i = 0; i < a; i++){
        printf("%d ",arr[i]);
    }
}