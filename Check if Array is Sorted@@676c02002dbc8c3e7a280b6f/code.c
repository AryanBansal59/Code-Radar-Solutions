#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < a; j++){
        if (arr[j] <= arr[j+1]){
            continue;
        }
        else{
            printf("Not Sorted");
            break;
        }
    }
}