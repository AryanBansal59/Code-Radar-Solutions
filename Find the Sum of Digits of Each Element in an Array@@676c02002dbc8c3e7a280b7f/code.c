#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int result[100];
    for (int i = 0; i < a; i++){
        while (a>0){
            int sum = 0;
            b = a % 10;
            sum += b;
            a /= 10;
        }
        result[i] = sum;
    }
    for (int i = 0; i < a; i++){
        printf("%d ",result[i]);
    }
}