#include <stdio.h>
int main(){
    //Write a C program to implement simple calculator using switch case
    double first_num,second_num;
    char operator;
    printf("Enter the operator: ");
    scanf("%c",&operator);
    printf("Enter the first number: ");
    scanf("%lf",&first_num);
    printf("Enter the second number: ");
    scanf("%lf",&second_num);
    switch (operator)
    {
    case '+':
        printf("The answer is %f",first_num+second_num);
        break;
    case '-':
        printf("The answer is %f",first_num-second_num);
        break;
    case 'x':
        printf("The answer is %f",first_num*second_num);
        break;
    case '/':
        printf("The answer is %f",first_num/second_num);
        break;
    default:
        printf("INVALID OPERATOR");
        break;
    }

}