#include <stdio.h>
int main() {
    int a,i,j;
    char ch;
    scanf("%d",&a);
    for (i=a;i>=1;i--){
        ch = 'A';
        for (j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}