#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=i){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}