#include <stdio.h>
int findindex(int arr[], int n, int k){
    for (int i = 0; i < n; i++){
        if (arr[i] = k){
            return i;
        }
    }
    return -1;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int index = findindex(arr,a,target);
    printf("%d",index);
}