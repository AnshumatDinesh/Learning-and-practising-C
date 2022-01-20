#include <stdio.h>
int main(){
    //:Write a C program to implement number pattern given below
    int ans=0;
    for(int i=1;i<=5;i++){
        if (i==1){printf("1\n");
        continue;}
        for (int j=1;j<=i+(1*(i-2));j++){
            if (j<=i-1){
                printf("%d",i+j);
                ans=i+j;
            }
            else{
                ans-=1;
                printf("%d",ans);
            }
        
        }
    printf("\n");
    }
}