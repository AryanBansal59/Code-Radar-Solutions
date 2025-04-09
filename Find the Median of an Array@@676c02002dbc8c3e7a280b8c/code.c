#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    if (a % 2 == 0){
        int c = (arr[a/2] + arr[a/2 + 1])/2;
    }
}