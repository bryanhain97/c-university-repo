#include <stdio.h>

int main(){
    int dogs = 5;
    double myAge = 24.6666666;
    float year = 2021.6666F;
    printf("Hello World\n");
    printf("%d, integer. %f double. %f floating point", dogs, myAge, year);
    // float value inside printf will be converted into double, which is why there is only one conversion char.
    // doubles take twice as much space 
    return 0;
}

// TO COMPILE TO EXECUTABLE RUN GCC helloWorld.c -o <nameOfExecutable>