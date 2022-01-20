#include <stdio.h>
int main(){
    char adj_1[20],adj_2[20],bird[20],room[20],verb_past[20],verb_2[20],rel_name[20],noun_1[20],liquid[20],verb_3[20],body[20],pl_noun[20],verb_ing_2[20],noun_2[20];
    printf("Enter an Adjective: ");
    scanf("%s",adj_1);
    printf("Enter an Adjective: ");
    scanf("%s",adj_2);
    printf("Enter a tye of bird : ");
    scanf("%s",bird);
    printf("Enter a room in house : ");
    scanf("%s",room);
    printf("Enter a verb in past tense: ");
    scanf("%s",verb_past);
    printf("Enter a verb: ");
    scanf("%s",verb_2);
    printf("Enter a relative\'s name: ");
    scanf("%s",rel_name);
    printf("Enter a noun: ");
    scanf("%s",noun_1);
    printf("Enter a liquid: ");
    scanf("%s",liquid);
    printf("Enter a verb ending in \'ing\': ");
    scanf("%s",verb_3);
    printf("Enter a part of body (PLURAL): ");
    scanf("%s",body);
    printf("Enter a plural noun: ");
    scanf("%s",pl_noun);
    printf("Enter a verb ending in \'ing\': ");
    scanf("%s",verb_ing_2);
    printf("Enter a noun: ");
    scanf("%s",noun_2);

    printf("It was a %s ,cold November day.I\n",adj_1);
    printf("woke up to the %s smell of %s\n",adj_2,bird);
    printf("roasting in the %s downstairs.I\n",room);
    printf(" %s down the stairs to see if I could\n",verb_past);
    printf("help %s the dinner. My mom said,\n",verb_2);
    printf("\"See if %s needs a fresh %s.\"So I\n",rel_name,noun_1);
    printf("carried a tray of glasses full of %s into\n",liquid);
    printf("the %s room. When I got there ,I\n",verb_3);
    printf("coundn\'t believe my %s ! There were \n",body);
    printf("%s %s on the %s ! \n",pl_noun,verb_ing_2,noun_2);

}