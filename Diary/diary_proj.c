#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void clear (void){//required for input in this garbage lang
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF);
}
void dir(char name[50]){//to add new file to directory
    FILE * dir_pointer=fopen("Directory.txt","a");
    fprintf(dir_pointer,"\n%s",name);
    fclose(dir_pointer);
}
void append(char n){//write mode
    char name[50],name_dup[50];
    printf("**USE _ INSTEAD OF SPACE**\n");
    printf("Enter title of your diary: ");
    scanf("%s",name_dup);
    clear();
    strcpy(name,name_dup);
    strcat(name,".txt");//combines the name with .txt extension
    char contents[1000];//variable stores content to be stored
    FILE * file_pointer=fopen(name,"a");//opening file in append mode
    if (n=='F'){//if this is a loaded file we need a break from last 
    fprintf(file_pointer,"\n________________________\n");
    }
    fgets(contents,1000,stdin);//input the cntents
    fprintf(file_pointer,"%s",contents);//print the contents
    fclose(file_pointer);//close the diary file
    if (n=='T'){dir(name);}//if this is a new file we add names to directory
}
void read(void){//to read an existing diary entry
    char name[50],name_dup[50];
    printf("**USE _ INSTEAD OF SPACE**\n");
    printf("Enter title of your diary: ");
    scanf("%s",name_dup);
    strcpy(name,name_dup);
    strcat(name,".txt");
    FILE * file_pointer=fopen(name,"r");//opening file in read mode
    char cont[10000];
    while(fgets(cont,10000,file_pointer) != NULL){//getting content of diary
        printf("%s",cont);//printing out the contents
    } 
    fclose(file_pointer);//closing the diary
}
void write_desision(void){//decieds whether to open new or old file
    printf("Do you want to make a new file or load in an old file: \n(ENTER n FOR newfile and l FOR Loading a file)");
    int nnl;
    scanf("%c",&nnl);
    clear();
    if (nnl=='n'){append('T');}
    else if (nnl=='l'){append('F');}
}
void del(void){//to delete the contents of  an existing diary entry
    char name[50],name_dup[50];
    printf("**USE _ INSTEAD OF SPACE**\n");
    printf("Enter title of your diary: ");
    scanf("%s",name_dup);
    strcpy(name,name_dup);
    strcat(name,".txt");
    FILE * file_pointer=fopen(name,"w");//opening file in write mode
    fprintf(file_pointer,"");//this will overwrite the data
    fclose(file_pointer);//closing the diary
    clear();
}
int decied(void){
    printf("Do you want to go to the main menu or continue: (m for main menu \nand e for exit)\n");
    char running_deciede;
    int running;
    clear();
    scanf("%c",running_deciede);
    clear();
    if (running_deciede=='m'){running=0;}
    else if (running_deciede=='e'){running=1;}
    return running;
}
int main(){
    int running=0;
    while (running==0){
        FILE * dir_pointer=fopen("Directory.txt","a+");//index of all files created via the app
        char index[10000];//string variable to store the index limited to 10k charecters
        while(fgets(index,10000,dir_pointer) != NULL){//reading all lines
            printf("%s",index);//printing out the index
        }
        
        fclose(dir_pointer);//closing the file imediately to avoid errors currupting the file
        clear();// clearing the stdin
        printf("Do you want to read or write into a file or clear a file's contents:\n(ENTER r FOR read \nand w FOR write\nand c for clear) ");
        char mode;//mode strores whether we want to read or write the diary
        scanf("%c",&mode);//inputing the chosen mode in mode variable
        clear();// clearing the stdin
        if (mode=='r'){read();}//if mode is read we execute the read function
        else if(mode=='w'){write_desision();}//if mode is write we execute the write desicion function
        else if(mode=='c'){del();}//if mode is clear we execute the del function
        running=decied();
    }
}