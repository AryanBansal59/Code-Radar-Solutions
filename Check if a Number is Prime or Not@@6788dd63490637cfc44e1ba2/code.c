#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    for (i=2;i<a;i++){
        if (a%i==0){
            break;
        }
        printf("Prime");
        else{
            printf("Not Prime");
        }
    }
    return 0;
}