#include <stdio.h>


int main(){
    double n1,n2;
    char op;
    printf("this is a text based calculator\n");
    printf("after entering the first number choose the operator\n");
    printf("+ for addition \n - for subtraction \n x or * for multiplication \n / for division\n");
    printf("Enter first number: ");
    scanf("%lf", &n1);
    printf("Operator: ");
    scanf(" %c", &op);
    printf("Enter the Second Number: ");
    scanf("%lf",&n2);
    if (op=='+'){
        printf("%f",n1+n2);
    }
    else if (op=='-'){
        printf("%f",n1-n2);
    }
    else if (op=='x' || op=='*'){
        printf("%f",n1*n2);
    }
    else if (op=='/'){
        printf("%f",n1/n2);
    }
    else{
        printf("ERROR");
    }
}