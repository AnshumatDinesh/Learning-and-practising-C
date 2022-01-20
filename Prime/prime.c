#include <stdio.h>
int main(){
    int limit,x=2,count=0;
    double y=2.0;
    FILE * file_pointer=fopen("prime_number_register.txt","w");
    printf("Till what number should we find primr number");
    scanf("%d",&limit);
    while(x<=limit){
        
        for(int i=1;i<=x;i++){
            if(x%i==0){
                count+=1;
            }
        
        }
        if (count==2){
            printf("%f\n",(y/limit)*100);
            fprintf(file_pointer,"%d\n",x);}
        count=0;
        x+=1;
        y+=1;
        
        
    }
    fclose(file_pointer);

    
}/*for(int i=3;i<=limit;i++){
        int count=0;
        for (int j=1;j<i;j++){
            if (j%i==0){
                count+=1;
            }

        }
        if (count==1){
            printf("%d\n",i);
        }
    }*/