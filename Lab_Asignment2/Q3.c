#include <stdio.h>
int hcf(int x, int y){
    int hcf=1;
    if (x<y){
        for(int i=1;i<=x;i++){
            if (y%i==0 && x%i==0){
                hcf=i;
            }
        }
    }
    else{
        for(int i=1;i<=y;i++){
            if (y%i==0 && x%i==0){
                hcf=i;
            }
        }
    } 
    return hcf;
}
int lcm(int x, int y){
    int lcm;
    if (x>y){
        lcm=x;
        int run=1;
        while(run==1){
            if (lcm%x==0 && lcm%y==0){
                run=0;

            }
            else{lcm+=1;}
        }
    }
    else{
        lcm=y;
        int run=1;
        while(run==1){
            if (lcm%x==0 && lcm%y==x){
                run=0;

            }
            else{lcm+=1;}
        }
    }
    return lcm;
}
void main(){
    int x,y;
    printf("Enter the first Number:" );
    scanf("%d",&x);
    printf("Enter the second Number:" );
    scanf("%d",&y);
    printf("HCF of %d and %d is %d\n LCM of %d and %d is %d",x,y,hcf(x,y),x,y,lcm(x,y));
}