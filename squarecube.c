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
    printf("enter the length of a side of a square: ");

    int userValue;

    scanf("%d", &userValue);

    printf("perimeter of the square is: %d\n", userValue * 4);

    printf("area of the square is: %d\n", userValue * userValue);

    printf("volume of a cube is: %d\n,", userValue * userValue * userValue);

    return 0;
}