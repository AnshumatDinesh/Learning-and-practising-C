#include <stdio.h>
#include <stdlib.h>
int main(){
    for (int i=0;i<6;i++){
        if(i<2){
            for(int j=1;j<=2*i+1;j++){
                printf("*");
            continue;
            }
        }
        else{
            for(int j=1;j<=5;j++){
                printf("*");
                }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
 