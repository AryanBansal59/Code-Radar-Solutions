// Your code here...
#include <stdio.h>
int fibonacciSeries(int n){
    int n1 = 0, n2 = 1, n3;
    if (n == 1){
        return 1;
    }
    else{
        return fibonacciSeries(n-1) + fibonacciSeries(n-2);
    }
}