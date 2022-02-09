#include <stdio.h>
void main(){
    int n=100;
    for (int i=10;i<n;i++){
        if ((i%10 + i/10)%7 ==0){
            printf("%d,",i);}
    }
}