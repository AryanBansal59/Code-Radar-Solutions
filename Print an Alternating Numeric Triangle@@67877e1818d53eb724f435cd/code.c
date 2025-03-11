#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n;
    for (int i = 1; i<=a; i++){
        if (i%2==0){
            n = 0;
        }
        else{
            n = 1;
        }
        for (int j = 1; j<=i; j++){
            printf("%d ",n);
            if (n==1){
                n = 0;
            }
            else{
                n = 1;
            }
        }
        printf("\n");
    }
}