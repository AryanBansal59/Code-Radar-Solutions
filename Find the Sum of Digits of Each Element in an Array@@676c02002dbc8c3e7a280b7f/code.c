#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int result[100];
    for (int i = 0; i < a; i++){
        int sum = 0;
        int temp = abs(arr[i]);
        while (temp>0){
            int b = temp % 10;
            sum += b;
            temp /= 10;
        }
        result[i] = sum;
    }
    for (int i = 0; i < a; i++){
        printf("%d ",result[i]);
    }
}