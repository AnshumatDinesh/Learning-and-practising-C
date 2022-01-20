#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void clear (void){
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main(){
    char name[50],name_dup[50];
    FILE * dir_pointer=fopen("Directory.txt","a");
    printf("**USE _ INSTEAD OF SPACE**\n");
    printf("Enter your name: ");
    scanf("%s",name_dup);
    clear();
    strcpy(name,name_dup);
    strcat(name,".txt");
    time_t rawtime;
    struct tm *info;
    time( &rawtime );
    info = localtime( &rawtime );
    /*asctime(info));*/
    char contents[1000];
    FILE * file_pointer=fopen(name,"w");
    fprintf(file_pointer,"________________________\n");
    fgets(contents,1000,stdin);
    fprintf(file_pointer,"%s",contents);
    fclose(file_pointer);
}