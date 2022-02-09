#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cube(int x){
    return x*x*x;}
int check(int num){
    int num_temp=num,it=0,num_ans=0,run=1;
    while(run==1){
        if (num_temp>10){
            num_ans+=cube(num_temp%(10));
            num_temp/=10;}
        else{
            run=0;
            num_ans+=cube(num_temp%(10));}
        it++;}
    if (num_ans==num){
        return 1;}
    else{
        return 0;}}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int b=check(num);
    if (b==1){printf("%d is an armstrong number\n",num);}
    else{printf("%d is not an armstrong number\n",num);}
    return EXIT_SUCCESS;}