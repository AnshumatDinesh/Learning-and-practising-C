#include <stdio.h>
#define DOUBLE(x) (2*(x))
#define TRIPLE(x) (3*(x))
#define QUADRUPLE(x) (4*(x))
#define FIVETIMES(x) (5*(x))
#define SQUARE(x) ((x)*(x))
#define PRINTINT(x) printf("%d\n",x);
#define LESSTHAN(x,y) x<y
#define GREATERTHAN(x,y) x>y
#define EQUAL(x,y) x==y
#define NOTEQUAL(x,y) x!=y
#define OR ||
#define AND &&
#define NOT !

int main(){
    printf("%d\n",DOUBLE(3));
    printf("%d\n",SQUARE(3));
    printf("%d\n",TRIPLE(3));
    printf("%d\n",QUADRUPLE(3));
    printf("%d\n",FIVETIMES(3));    
    PRINTINT(5)
      if (NOT EQUAL(1,2)OR EQUAL(5,5)){PRINTINT(1)}
    else{PRINTINT(0)}
}
