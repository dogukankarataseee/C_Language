#include <stdio.h>
#include <stdlib.h>


/*
    int  4 bytes  %d
    double  8 bytes  %lf
    float  4 bytes  %f
    char  1 byte  %c
*/


int main (void) {


    int number = 10;
    double decimal = 3.14;
    float decimal2 = 3.14f;
    char character = 'A';

    printf("Integer: %d\n", number);
    printf("Double: %lf\n", decimal);
    printf("Float: %f\n", decimal2);
    printf("Character: %c\n", character);




}