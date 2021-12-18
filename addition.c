#include <stdio.h>

int main(){

    int a = 10; int b = 43;
    float a_float = 3453.4, b_float = 12.24;
    double a_double = 34298342.43, b_double = 12392634.323;


    printf("Addition Between Integers: %d + %d = %d \n", a, b, a + b);
    printf("Addition Between Floats  : %f + %f = %f \n", a_float, b_float, a_float + b_float);
    printf("Addition Between Doubles : %f + %f = %f \n", a_double, b_double, a_double + b_double);

    return 0;

}
