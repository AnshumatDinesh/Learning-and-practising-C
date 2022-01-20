#include <stdio.h>
#include <string.h>
int main(){
    char name[50],name_dup[50];
    printf("**USE _ INSTEAD OF SPACE**\n");
    printf("Enter your name: ");
    scanf("%s",name_dup);
    strcpy(name,name_dup);
    strcat(name,".txt");
    FILE * file_pointer=fopen(name,"r");
    char cont[10000]; 
    fgets(cont,10000,file_pointer);
    printf("%s",cont);
    fclose(file_pointer);
}