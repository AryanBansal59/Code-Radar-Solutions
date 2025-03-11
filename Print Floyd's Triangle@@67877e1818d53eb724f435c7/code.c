#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    int b =1;
    for (i=1;i<=a;i++){
        for (j=i;j<=i;j++){
            printf("%d ",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}   