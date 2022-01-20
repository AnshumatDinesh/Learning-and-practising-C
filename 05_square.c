#include <stdio.h>
#include <stdlib.h>



int isInRange(int coord, int offset, int size) {
    if (coord>=offset&&coord<offset+size){return 1;}
    else{return 0;}
}

int isAtBorder(int coord, int offset, int size) {
    if (coord==offset||coord==offset+size){return 1;}
    else {return 0;}
  return 0;
}
void squares(int size1, int x_offset, int y_offset, int size2) {
    int w;
    if (size1>x_offset+size2){
        w=size1;
    }
    else {w=x_offset+size2;}
    int h;
    if (size1>y_offset+size2){
        h=size1;
    }
    else {h=y_offset+size2;}
    
  for (int y=0;y<h;y++){
      for (int x = 0; x < w; x++)
      {
          if ((((x>=x_offset)&&(x_offset+size2>x))&&((y==y_offset)||(y==y_offset+size2-1)))||((y>=y_offset)&&(y_offset+size2>y))&&((x==x_offset)||(x==x_offset+size2-1))){
              printf("*");
          }
          else{
              if ((x<size1&&(y==0||y==size1-1))||(y<size1&&(x==0||x==size1-1))){
                  printf("#");
              }
              else{printf(" ");}
          }
          
      }
      printf("\n");
  }

}
int main(){
    squares(4,1,2,3);
    printf("%d",isInRange(2,1,3));
}