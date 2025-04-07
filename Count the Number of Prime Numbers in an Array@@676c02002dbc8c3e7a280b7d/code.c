#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[100];
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for (int i = 0; i < a; i++){
        if (arr[i]>1){
            for (int j = 2; j < a; j++){
                int factors = 0;
                if ((arr[i] % j) == 0){
                    factors++;
                }
                else{
                    continue;
                }
                if (factors == 1){
                count++;
            }
            }
        }
        else{
            continue;
        }
    }
    printf("%d",count);
}