#include <stdio.h>
#include <math.h>
#define PI 3.1415926535

int main (void){
    double a, z1, z2;
    printf("Enter the value of variable a: ");
    if(scanf("%lf", &a) == 1){
        z1 = 2.0 * pow(sin(3.0 * PI - 2.0 * a),2) * pow(cos(5.0 * PI + 2.0 * a),2);
        z2 = 1.0/4.0 - 1.0/4.0 * sin(5.0/2.0 * PI - 8.0 * a);
        printf("z1: %lf\nz2: %lf", z1, z2); 
    }else{
        printf("The character you entered is not a number, please try again.");
    }
    ;
    
    return 0;
}