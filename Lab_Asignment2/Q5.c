#include<stdio.h>
void main(){
    int cp,sp,profit;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);
    printf("Enter Sale Price: ");
    scanf("%d",&sp);
    profit=sp-cp;
    if (profit<0){
        printf("The seller had a loss of %d",profit*(-1));
    }
    else if (profit>0){
        printf("The seller had a Profit of %d",profit);
    }
    else if (profit==0){
        printf("The seller had a 0 Profit ");
    }
}