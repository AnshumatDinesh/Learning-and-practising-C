#include <stdio.h>
#include <stdlib.h>
int main(){
int i,l;
printf("Enter name: ");
scanf("%d",&l);
for (i=0;i<l;i++){
    printf("%d\n",rand());
}
}