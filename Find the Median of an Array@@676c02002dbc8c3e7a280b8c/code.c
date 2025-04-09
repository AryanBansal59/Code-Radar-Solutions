#include <stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    if (a % 2 == 0){
        c = (arr[a/2 -1] + arr[a/2])/2;
    }
    else{
         c = arr[a/2];
    }
    printf("%d",c);
}