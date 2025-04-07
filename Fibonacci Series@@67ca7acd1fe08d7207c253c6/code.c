
int fibonacciSeries(int n){
    int n1 = 0, n2 = 1, n3;
    printf("%d %d",n1,n2);
    for (int i = 1; i <= n; i++){
        if (n==0 || n==1){
            printf("0");
        }
        else if (n==2){
            printf("1");
        }
        else{
            n3 = n1 + n2;
            printf("%d ",n3);
            n1 = n2;
            n2 = n3;
        }
    }
}