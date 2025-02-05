#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=1;j<=a;j+=2){
            printf("1 ");
        }
        for (j=2;j<=a;j+=2){
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}