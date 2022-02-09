#include <stdio.h>
#include <stdlib.h>
int main(){
    char text[1000];
    FILE * file;
    file=fopen("text_sample.txt","r");
    
    while( fgets(text,1000,file) != NULL ){
        int counter=0;
        for(int i=0;i<=1000;i++){
            if (text[i]=='\n'){
                break;
            }
        
        printf("%c",text[i]);
        }
    }
    return EXIT_SUCCESS;
}
//            counter++;
//              printf("%d",counter);