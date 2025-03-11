#include <stdio.h>
int isPrime(int a);
// int main(){
//     int n,factors;
//     printf("Input a positive number: ");
//     scanf("%d",&n);
//     factors = isPrime(n);
//     if (factors == 2){
//         printf("%d is a prime number.",n);
//     }
//     else{
//         printf("%d is not a prime number.",n);
//     }
//     return 0;
// }
int isPrime(int n){
    int i,count=0;
    for (i=1;i<=n;i++){
        if (n%i==0){
            count++;
        }
    }
    if (count == 2){
        return 1;
    }
    else{

        return 0;
    }
}