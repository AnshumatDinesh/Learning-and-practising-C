#include <stdio.h>
double far(double F){//here a function has been declared we will learn about this later
    return ((5.0/9.0)*(F-32));//here we use 5.0 instead of 5
}
double celsius(double C){
    return ((9.0/5.0)*C)+32;
}
int main(){
    printf("Do you want to translate to celsius or farenhiet (TYPE C OR F): ");
    char con;
    scanf("%c",&con);
    printf("Enter the value");
    double val;
    scanf("%lf",&val);
    switch (con)//we will lern about this later
    {
    case 'C':
        printf("%f°F is %f°C",val,celsius(val));
        break;
    case 'c':
        printf("%f°F is %f°C",val,celsius(val));
        break;
    case 'F':
        printf("%f°C is %f°F",val,far(val));
        break;
    case 'f':
        printf("%f°C is %f°F",val,far(val));
        break;
    default:
        printf("ERROR: INVALID ID");
        break;
    }
}