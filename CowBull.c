#include <stdio.h>
#include<conio.h>


int main(){
    char word[4];
  
    printf("Enter: ");
    int p=0;
    while(p<=4){
        word[p]=getch();
        if(word[p]!='\r'){
            printf("*");
        }
        p++;
    }

    printf("%s",word);

}
