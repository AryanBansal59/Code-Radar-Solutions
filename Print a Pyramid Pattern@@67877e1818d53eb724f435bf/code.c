#include <stdio.h>
int main() {
    int a,i,j,space;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=2*i-1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}