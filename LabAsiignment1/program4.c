#include<stdio.h>
int main(){
    //Write a C program to implement 8 star pattern given below.
    for (int i=0;i<=8;i++){
        if (i%4==0){
            printf(" *** \n");
        }
        else{printf("*   *\n");}
    }
}