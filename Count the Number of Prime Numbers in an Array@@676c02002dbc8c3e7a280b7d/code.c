#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for (int i = 0; i < a; i++){
        int factors = 0;
        for (int j = 2; j < arr[i]; j++){
            if (arr[i] % 2 == 0){
                factors++;
            }
        }
        if (factors == 1){
            count++;
        }
    }
    printf("%d",count);
}