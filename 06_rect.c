#include <stdio.h>
#include <stdlib.h>
#define AND &&
#define OR ||
#define FIND(x) ri_w.x=min(r1_w.x,r2_w.x);
#define FINDM(x) ri_w.x=max(r1_w.x,r2_w.x);
//I've provided "min" and "max" functions in
//case they are useful to you
int min (int a, int b) {
  if (a < b) {
    return a;
  }
  return b;
}
int max (int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

//Declare your rectangle structure here!
typedef struct rect_t{
    int x,y,width,height; 
}rectangle;
typedef struct rect_work_t{
    int x1,x2,x3,x4,y1,y2,y3,y4;
}rectangle_working;


rectangle canonicalize(rectangle r) {
    if (r.width<0){
        r.x+=r.width;
        r.width*=-1;}
    if (r.height<0){
        r.y+=r.height;
        r.height*=-1;
    }

  
  return r;
}
rectangle_working work(rectangle r){
    r=canonicalize(r);
    rectangle_working r_w;
    r_w.x1=r.x;
    r_w.x2=r.x+r.width;
    r_w.x3=r.x+r.width;
    r_w.x4=r.x;
    r_w.y1=r.y;
    r_w.y2=r.y;
    r_w.y3=r.y+r.height;
    r_w.y4=r.y+r.height;
    return r_w;
}
rectangle intersection(rectangle r1, rectangle r2) {
  rectangle r_intersection;
  rectangle_working r1_w,r2_w,ri_w;
  r1_w=work(r1);
  r2_w=work(r2);
  if (r1_w.x1>r2_w.x2 OR r2_w.x1>r1_w.x2 OR r1_w.y1>r2_w.y3 OR r2_w.y1>r1_w.y3){
    r_intersection.x=0;
    r_intersection.y=0;
    r_intersection.width=0;
    r_intersection.height=0;
  }
  else{
    FINDM(x1)
    FIND(x2)
    FIND(x3)
    FINDM(x4)
    FINDM(y1)
    FINDM(y2)
    FIND(y3)
    FIND(y4)
    r_intersection.x=ri_w.x1;
    r_intersection.y=ri_w.y1;
    r_intersection.width=ri_w.x2-ri_w.x1;
    r_intersection.height=ri_w.y4-ri_w.y1;}
  
    return r_intersection;
}

//You should not need to modify any code below this line
void printRectangle(rectangle r) {
  r = canonicalize(r);
  if (r.width == 0 AND r.height == 0) {
    printf("<empty>\n");
  }
  else {
    printf("(%d,%d) to (%d,%d)\n", r.x, r.y, 
                                   r.x + r.width, r.y + r.height);
  }
}

int main (void) {

  rectangle r1;
  rectangle r2;
  rectangle r3;
  rectangle r4;

  r1.x = 2;
  r1.y = 3;
  r1.width = 5;
  r1.height = 6;
  printf("r1 is ");
  printRectangle(r1);

  r2.x = 4;
  r2.y = 5;
  r2.width = -5;
  r2.height = -7;
  printf("r2 is ");
  printRectangle(r2);
  
  r3.x = -2;
  r3.y = 7;
  r3.width = 7;
  r3.height = -10;
  printf("r3 is ");
  printRectangle(r3);

  r4.x = 0;
  r4.y = 7;
  r4.width = -4;
  r4.height = 2;
  printf("r4 is ");
  printRectangle(r4);

  //test everything with r1
  rectangle i = intersection(r1,r1);
  printf("intersection(r1,r1): ");
  printRectangle(i);

  i = intersection(r1,r2);
  printf("intersection(r1,r2): ");
  printRectangle(i);
  
  i = intersection(r1,r3);
  printf("intersection(r1,r3): ");
  printRectangle(i);

  i = intersection(r1,r4);
  printf("intersection(r1,r4): ");
  printRectangle(i);

  //test everything with r2
  i = intersection(r2,r1);
  printf("intersection(r2,r1): ");
  printRectangle(i);

  i = intersection(r2,r2);
  printf("intersection(r2,r2): ");
  printRectangle(i);
  
  i = intersection(r2,r3);
  printf("intersection(r2,r3): ");
  printRectangle(i);

  i = intersection(r2,r4);
  printf("intersection(r2,r4): ");
  printRectangle(i);

  //test everything with r3
  i = intersection(r3,r1);
  printf("intersection(r3,r1): ");
  printRectangle(i);

  i = intersection(r3,r2);
  printf("intersection(r3,r2): ");
  printRectangle(i);
  
  i = intersection(r3,r3);
  printf("intersection(r3,r3): ");
  printRectangle(i);

  i = intersection(r3,r4);
  printf("intersection(r3,r4): ");
  printRectangle(i);

  //test everything with r4
  i = intersection(r4,r1);
  printf("intersection(r4,r1): ");
  printRectangle(i);

  i = intersection(r4,r2);
  printf("intersection(r4,r2): ");
  printRectangle(i);
  
  i = intersection(r4,r3);
  printf("intersection(r4,r3): ");
  printRectangle(i);

  i = intersection(r4,r4);
  printf("intersection(r4,r4): ");
  printRectangle(i);
  printf("%d,%d,%d,%d",intersection(r1,r4).x,intersection(r1,r4).y,intersection(r1,r4).width,intersection(r1,r4).height);


  return EXIT_SUCCESS;

}