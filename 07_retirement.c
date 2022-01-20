#include <stdio.h>
#include <stdlib.h>
#define AND &&
#define OR ||
#define NOT !

typedef struct _retire_info
{
    int months;
    double contribution,rate_of_return;
}retire_info;
int Age_y(int startAge){
    return startAge/12;
}
int Age_m(int startAge){
    return startAge%12;
}
typedef struct detts
{
    int Age;
    double amt;
}details;

details money(int months,double initial, double contribution,double rate,int startAge,int sign){
    double amt;
    amt=initial;
    for (int i=0; i<months;i++){
        int startAge_y,startAge_m;
        startAge_y=Age_y(startAge);
        startAge_m=Age_m(startAge);
        printf("Age %3d month %2d you have $%.2lf\n",startAge_y,startAge_m,amt);
        amt=amt+amt*(rate/1200);
        amt+=contribution;
        startAge++;
    }
    
    details prod;
    prod.Age=startAge;
    prod.amt=amt;
    return prod;
}
void retirement (int startAge, double initial,retire_info working, retire_info retired){
    details D1=money(working.months,initial,working.contribution,working.rate_of_return,startAge,1);
    money(retired.months,D1.amt,retired.contribution,retired.rate_of_return,D1.Age,-1);
}
int main(){
    retire_info working;
    working.months=489;
    working.rate_of_return=4.5;
    working.contribution=1000;
    retire_info retired;
    retired.months=384;
    retired.contribution=-4000;
    retired.rate_of_return=1;
    retirement(327,21345,working,retired);
    return EXIT_SUCCESS;
}
