#include <stdio.h>
int main(){
    int n ,answer=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        int digital_sum=0,complete=0,m;
        m=i;
        while (complete==0){
            if (m<10){
                complete=1;
                digital_sum+=m;
                break;}
            digital_sum+=m%10;
            m/=10;
        }
        answer+=digital_sum;
    }
    printf("The answer is %d",answer);
}