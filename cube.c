#include <stdio.h>
double cube(double x){
    return x*x*x;
}
int main(){
    double x;
    printf("Enter the number to cube: ");
    scanf("%lf",&x);
    printf("he cube of %f is %f",x,cube(x));
}