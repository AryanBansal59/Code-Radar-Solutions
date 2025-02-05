#include <stdio.h>
int main() {
    int a,i,j;
    char ch;
    scanf("%d",&a);
    ch = 'A';
    for (i=1;i<=a;i++){
        for (j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n")
    }
    return 0;
}