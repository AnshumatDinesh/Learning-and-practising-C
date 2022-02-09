#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int a=1;
    while (a<=num){
        int b=check(a);
        if (b==1){
            printf("%d is an armstrong number\n",a);}
        a++;}
    return EXIT_SUCCESS;}