#include <stdio.h>
#include <string.h>
int main() {
    int a,b,c;char oper[100];
    scanf("%d %d %s",&a,&b,oper);
    if (strcmp(oper == '+')==0){
        c = a+b;
        printf("%d",c);
    }
    else if (strcmp(oper == '-')==0){
        c = a-b;
        printf("%d",c);
    }
    else if (strcmp(oper == '*')==0){
        c = a*b;
        printf("%d",c);
    }
    else if(strcmp(oper == '/')==0){
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