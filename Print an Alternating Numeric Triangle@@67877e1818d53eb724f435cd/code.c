#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=2;j<=i;j++){
            printf("0 ");
        }
        for (j=1;j<=i;j+=2){
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}