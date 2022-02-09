#include <stdio.h>
int main(){
    int n ;
    long term=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2; i<=n+1;i++){
        printf("%d ",term);
        term*=i;
    }
    
}