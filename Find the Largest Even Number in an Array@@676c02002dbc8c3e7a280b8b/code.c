#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int b = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
           b++;
        }
    }
    int evenarr[b];
    for (int i = 0; i < n; i++){
        if (arr[i] % 2==0){
            evenarr = arr[i];
        }
    }
    printf("%d",evenarr[b-1]);
}