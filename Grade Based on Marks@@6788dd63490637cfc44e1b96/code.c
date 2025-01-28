#include <stdio.h>
int main() {
    int a;
    char grade;
    scanf("%d",&a);
    if (a>=90){
        grade = 'A';
    }
    else if (90<a<=80){
        grade = 'B';
    }
    else if (80<a<=70){
        grade = 'D';
    }
    else if (70<a<=60){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
    printf("%c",grade);
    return 0;
}