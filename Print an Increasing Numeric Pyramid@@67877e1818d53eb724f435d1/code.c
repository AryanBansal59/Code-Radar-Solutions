#include <stdio.h>
int main() {
    int a,i,j,space;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (space=1;space<=(a-i);space++){
            print(" ");
        }
        for (j=1;j<=(i);j++){
            printf("%d ",j);
        }
        printf("\n");
    } 
    return 0;
}