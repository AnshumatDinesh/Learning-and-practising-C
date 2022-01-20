#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define AND &&
#define OR ||
#define NOT !
int isnum(char input){
    if (input>=48 AND input<=57){
        return 1;
    }
    else {return 0;}
}
int isalpha_lowercase(char input){
    if (input>=97 AND input<=122){
        return 1;
    }
    else {return 0;}
}
int isalpha_uppercase(char input){
    if (input>=65 AND input<=90){
        return 1;
    }
    else {return 0;}
}
int ischarecter(char input){
    if ((input>=33 AND input<=47) OR (input>=58 AND input<=64) 
    OR (input>=91 AND input<=96) OR (input>=123 AND input<=126)){
        return 1;
    }
    else {return 0;}
}
int main(){
    char input[100];
    fgets(input,100,stdin);
    int l;
    l=strlen(input);
    char output[l],num[]="N",low[]="L",up[]="U",sp[]=" ",ch[]="C";
    for (int i=0;i<l;i++){
        if (isnum(input[i])==1){
            printf("NUMBER---> %c\n",input[i]);
            strcat(output,num);
        }
        else if (isalpha_lowercase(input[i])==1){
            printf("LOWERCASE ALPHABET---> %c\n",input[i]);
            strcat(output,low);
        }
        else if (isalpha_uppercase(input[i])==1){
            printf("UPPERCASE ALPHABET---> %c\n",input[i]);
            strcat(output,up);
        }
        else if (input[i]==32){
            printf("SPACE---> %c\n",input[i]);
            strcat(output,sp);
        }
        else if (ischarecter(input[i])==1){
            printf("SPECIAL CHARECTER---> %c\n",input[i]);
            strcat(output,ch);

    }    
    }
    printf("%s",output);

    return EXIT_SUCCESS;
}