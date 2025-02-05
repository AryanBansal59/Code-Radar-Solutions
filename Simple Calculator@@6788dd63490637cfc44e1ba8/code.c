#include <stdio.h>
int main() {
    int a,b,c;char oper;
    scanf("%d %d %c",&a,&b,&oper);
    if (oper=='+'){
        c = a+b;
        printf("%d",c);
    }
    else if (oper=='-'){
        c = a-b;
        printf("%d",c);
    }
    else if (oper=='*'){
        c = a*b;
        printf("%d",c);
    }
    else if(oper=='/'){
        if (b!=0){
            c = a/b;
            printf("%d",c)
        }
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }
    return 0;
}