// Your code here...
#include <stdio.h>
int isPrime(int n){
    int factors = 0;
    for (int i = 1;i<=n; i++){
        if (n%i == 0){
            count ++;
        }
    }
    if (count == 2){
        printf("1");
    }
    else{
        printf("0");
    }
}
int main{
    int a;
    scanf("%d",&a);
    for (int i = 1; i<=a; i++){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
}