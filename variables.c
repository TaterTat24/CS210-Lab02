/* output.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 2 - Variables, I/O, and Arithmetic Expressions
 * Purpose: Learn C basics
 */

// What do you need to #include to use the printf/scanf functions?
#include <stdio.h>

// Put Your Main Function Here
int main(int argc, char const *argv[])
{
    int valueOne;
    int valueTwo;

    printf("Enter two integers: ");

    scanf("%d %d", &valueOne, &valueTwo);
    
    printf("valueOne divided by valueTwo is %d\n", valueOne/valueTwo);

    printf("valueOne multiplied by valueTwo is %d\n", valueOne*valueTwo);

    printf("valueOne incremented is %d\n", valueOne + 1);

    printf("valueTwo decremented is %d\n", valueTwo - 1);

    return 0;
}