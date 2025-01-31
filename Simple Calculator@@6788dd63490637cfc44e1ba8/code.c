#include <stdio.h>
int main() {
    int a,b,c,char oper[100];
    scanf("%d %d %s",&a,&b,&oper);
    if (oper == '+'){
        c = a+b;
        printf("%d",c);
    }
    else if (oper == '-'){
        c = a-b;
        printf("%d",c);
    }
    else if (oper == '*'){
        c = a*b;
        printf("%d",c);
    }
    else if(oper == '/'){
        c = a/b;
        printf("%d",c);
    }
    return 0;
}