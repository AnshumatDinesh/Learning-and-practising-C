#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    int num,run=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    int num_temp=num,it=0;
    while(run==1){
        if (num_temp>10){
            printf("%d",num_temp%(10)); 
            num_temp/=10;
        }
        else{
            printf("%d\n",num_temp);
            run=0;
        }
        it++;
    }
    return EXIT_SUCCESS;
 }