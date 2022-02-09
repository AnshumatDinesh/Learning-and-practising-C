#include <stdio.h>
#include <math.h>
void main(){
    int n,total=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int temp=0;
        for(int j=1;j<=i;j++){
            temp=temp+(1*(pow(10,j-1)));
        }
        total+=temp;
    }
    printf("%d",total);
}