#include<stdio.h>
#include<stdlib.h>
#include "cards.h"
#include <assert.h>
#define AND &&
#define OR ||
#define NOT !
#define CASE(x) case x:return 'x';break;
#define CASEstr(x) case x:return "x";break;
#define CASE1(x) case 'x':c.value=x;break;
void asserts_card_valid(card_t c){
    assert(c.value>=2 AND c.value<=VALUE_ACE );
    assert(c.suit>=SPADES AND c.suit<=NUM_SUITS);
}
const char * ranking_to_string(hand_ranking_t r){
    if (r==0){
        return"Straight Flush";}
    else if (r==1){
        return"Four of a kind";
    }
    else if (r==2){
        return"Full House";
    }
    else if (r==3){
        return"Flush";
    }
    else if (r==4){
        return"Straight";
    }
    else if (r==5){
        return"Three of a kind";
    }
    else if (r==6){
        return"Two Pair";
    }
    else if (r==7){
        return"Pair";
    }
    else if (r==8){
        return"Nothing";
    }
    else {return"INVALID";}
}
char value_letter(card_t c){
    switch (c.value)
    {
    case 2:return '2';break;
    case 3:return '3';break;
    case 4:return '4';break;
    case 5:return '5';break;
    case 6:return '6';break;
    case 7:return '7';break;
    case 8:return '8';break;
    case 9:return '9';break;
    case 10:return '0';break;
    case 11:return 'J';break;
    case 12:return 'Q';break;
    case 13:return 'K';break;
    case 14:return 'A';break;
    default:
        return'N';
        break;
    }
}
char suit_letter(card_t c){
    switch (c.suit)
    {
    case SPADES:
        return's';
        break;
    case HEARTS:
        return 'h';
        break;
    case DIAMONDS:
        return 'd';
        break;
    case CLUBS:
        return 'c';
        break;
    default:
        return 'N';
        break;
    }
}
void print_card(card_t c){
    switch (suit_letter(c))
    {
    case 's':
        switch (value_letter(c))
        {
        case '2':
        printf("2s");
        break;
    case '3':
        printf("3s");
        break;
    case '4':
        printf("4s");
        break;
    case '5':
        printf("5s");
        break;
    case '6':
        printf("6s");
        break;
    case '7':
        printf("7s");
        break;
    case '8':
        printf("8s");
        break;
    case '9':
        printf("9s");
        break;
    case '0':
        printf("10s");
        break;
    case 'J':
        printf("Js");
        break;
    case 'Q':
        printf("Qs");
        break;
    case 'K':
        printf("Ks");
        break;
    case 'A':
        printf("As");
        break;
        
        default:
            break;
        }
        break;
    case 'h':
        switch (value_letter(c))
        {
        case '2':
        printf("2h");
        break;
    case '3':
        printf("3h");
        break;
    case '4':
        printf("4h");
        break;
    case '5':
        printf("5h");
        break;
    case '6':
        printf("6h");
        break;
    case '7':
        printf("7h");
        break;
    case '8':
        printf("8h");
        break;
    case '9':
        printf("9h");
        break;
    case '0':
        printf("10h");
        break;
    case 'J':
        printf("Jh");
        break;
    case 'Q':
        printf("Qh");
        break;
    case 'K':
        printf("Kh");
        break;
    case 'A':
        printf("Ah");
        break;
        
        default:
            break;
        }
        break;
    case 'd':
        switch (value_letter(c))
        {
        case '2':
        printf("2d");
        break;
    case '3':
        printf("3d");
        break;
    case '4':
        printf("4d");
        break;
    case '5':
        printf("5d");
        break;
    case '6':
        printf("6d");
        break;
    case '7':
        printf("7d");
        break;
    case '8':
        printf("8d");
        break;
    case '9':
        printf("9d");
        break;
    case '0':
        printf("10d");
        break;
    case 'J':
        printf("Jd");
        break;
    case 'Q':
        printf("Qd");
        break;
    case 'K':
        printf("Kd");
        break;
    case 'A':
        printf("Ad");
        break;
        
        default:
            break;
        }
        break;
    case 'c':
        switch (value_letter(c))
        {
        case '2':
        printf("2c");
        break;
    case '3':
        printf("3c");
        break;
    case '4':
        printf("4c");
        break;
    case '5':
        printf("5c");
        break;
    case '6':
        printf("6c");
        break;
    case '7':
        printf("7c");
        break;
    case '8':
        printf("8c");
        break;
    case '9':
        printf("9c");
        break;
    case '0':
        printf("10c");
        break;
    case 'J':
        printf("Jc");
        break;
    case 'Q':
        printf("Qc");
        break;
    case 'K':
        printf("Kc");
        break;
    case 'A':
        printf("Ac");
        break;
        
        default:
            break;
        }
        break;
    default:
        break;
    }
}
card_t card_from_letters(char value_let, char suit_let){
    card_t c;
    switch (value_let)
    {
    case '2':
        c.value=2;
        break;
    case '3':
        c.value=3;
        break;
    case '4':
        c.value=4;
        break;
    case '5':
        c.value=5;
        break;
    case '6':
        c.value=6;
        break;
    case '7':
        c.value=7;
        break;
    case '8':
        c.value=8;
        break;
    case '9':
        c.value=9;
        break;
    case '0':
        c.value=10;
        break;
    case 'J':
        c.value=11;
        break;
    case 'Q':
        c.value=12;
        break;
    case 'K':
        c.value=13;
        break;
    case 'A':
        c.value=14;
        break;
    default:
        printf("INVALID INPUT FOR VALUE!!!");
        exit(EXIT_FAILURE);
        break;
    }
    switch (suit_let)
    {
    case 's':
        c.suit=SPADES;
        break;
    case 'h':
        c.suit=HEARTS;
        break;
    case 'd':
        c.suit=DIAMONDS;
        break;
    case 'c':
        c.suit=CLUBS;
        break;
    default:
        printf("INVALID INPUT FOR SUIT!!!");
        exit(EXIT_FAILURE);
        break;
    }
    return c;
}
card_t card_from_num(unsigned c){
    card_t card;
    if (c>=0 AND c<=12){
        card.suit=SPADES;
        card.value=c+2;
    }
    else if (c>=13 AND c<=25){
        card.suit=DIAMONDS;
        card.value=c-11;
    }
    else if (c>=26 AND c<=38){
        card.suit=CLUBS;
        card.value=c-24;
    }
    else if (c>=39 AND c<=51){
        card.suit=HEARTS;
        card.value=c-37;
    }
    else{
        printf("INVALID INPUT FOR CARD!!!");
        exit(EXIT_FAILURE);
    }
    return card;
}
