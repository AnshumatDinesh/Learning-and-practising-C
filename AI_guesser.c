#include <stdio.h>
int main(){
    int a,x,s=0,b=0,c,step=0;//Declaring the variables 
    printf("Enter the upper limit: \a");
    scanf("%d",&c);//user will enter the upper limit
    printf("Enter a number between 0 and %d and our bot will try an guess it\n only by getting to know wheather it is less than or greater than an random number:",c);
    scanf("%d",&a);//now use will enter the secret number, the bot does not know this no. it only knows if it is less than it or greater than it
    x=(b+c)/2;//the guess will be half as we are going  by the AP approach
    while (s==0){
        if (x>a){
            c=x;
            x=(x+b)/2;
            printf("%d,%d\n\a",x,a);}
            
        else if (x<a){
            b=x;
            x=(x+c)/2;
            printf("%d,%d\n\a",x,a);
        }
        else if (x==a){
            printf("the bot gueses the number was %d\n\a",x);
            printf("bot wins in %d steps\a",step);
            s=1;
        }
        step++;
        }
    }
