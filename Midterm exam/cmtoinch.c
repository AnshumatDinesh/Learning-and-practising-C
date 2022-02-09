#include <stdio.h>
float cm_to_inch(float cm ){
    float inches;
    inches=cm/2.54;
    printf("%0.1f cm is %0.1f inch\n",cm,inches);
}
float cm_to_feet(float cm){
    float feet=0.0;
    float inches;
    inches=cm/2.54;
    while (inches>12)
    {
        feet+=1;
        inches-=12; 
    }
    feet+=(inches/12);
    printf("%0.1f cm id %0.1f feet\n",cm,feet);
}
void main(){
    printf("Enter the length (in cm): ");
    float cm,in;
    scanf("%f",&cm);
    cm_to_inch(cm);
    cm_to_feet(cm);
}