#include <stdio.h>
#include <math.h>

int main(void){
    float x, y, bmi;
    scanf("%f %f", &x,&y);
    x/=100;
    bmi=y/(x*x);
    printf("%f", bmi);
    
    return 0;
}
