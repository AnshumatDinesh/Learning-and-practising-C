#include <stdio.h>
int main(){
    /*Write a C program to input electricity unit charged and calculate the total electricity
        bill according to the given condition:
        For first 50 units Rs. 0.50/unit
        For next 100 units Rs. 0.75/unit
        For next 100 units Rs. 1.20/unit
        For unit above 250 Rs. 1.50/unit
        An additional surcharge of 20% is added to the bill.*/
    printf("Enter the elecity units: ");
    double amt,bill;
    scanf("%lf",&amt);
    if (amt<=50){
        bill=amt*(0.5);
        printf("The bill is %f",0.2*bill+bill);
        return 0;
    }
    else if(amt>50){
        bill=50*(0.5);
        amt-=50;
    }
    if (amt<=100){
        bill+=(amt*(0.75));
        printf("The bill is %f",0.2*bill+bill);
        return 0;
    }
    else if(amt>100){
        bill+=(100*0.75);
        amt-=100;
    }
    if (amt<=100){
        bill+=(amt*(1.2));
        printf("The bill is %f",0.2*bill+bill);
        return 0;
    }
    else if(amt>100){
        bill+=(100*1.2);
        amt-=100;
    }
    if (amt<=50){
        bill+=(amt*(1.5));
        printf("The bill is %f",0.2*bill+bill);
        return 0;
    }
    else if(amt>50){
        bill+=(100*1.5);
        amt-=100;
    }
    printf("The bill is %f",0.2*bill+bill);
}