#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[a];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for (int i = 0; i < a; i++){
        if (arr[i] == k){
            count++;
        }
    }
    printf("%d",count);
}