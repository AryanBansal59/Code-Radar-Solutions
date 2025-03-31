#include <stdio.h>
int main(){
    int a,k;
    int arr[100];
    scanf("%d",&a);
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for (int j = 0; j < a; j++){
        printf("%d ",arr[j+k]);
    }
}