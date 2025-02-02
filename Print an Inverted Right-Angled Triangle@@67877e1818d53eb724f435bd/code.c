#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    for (i=a;i<=a;i--){
        for (j=i;j<=i;j--){
            printf("*");
        }
    }
    return 0;
}