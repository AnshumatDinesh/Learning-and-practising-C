#include <stdio.h>
void main(){
    printf("Enter the first number: ");
    int n1,n2,n_temp=0;
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    for(int i=1;i<n1;i++){
        if (n1%i==0){
            n_temp+=i;
        }
    }
    if (n_temp==n2){
        printf("%d and %d are amicable\n",n1,n2);
    }
    else{printf("%d and %d are not amicable\n",n1,n2);}
}