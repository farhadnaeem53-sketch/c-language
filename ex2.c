#include <stdio.h>
#define PI 3.14
int main()
{
    int a =8;
    const float b = 7.333;
    //PI = 7.33;   //Cannot do this since PI is a constant
    printf("my backslash \\ %f", PI);
    // b = 7.22;  //Cannot do this since b is a constant
    // printf("Hello World\n");
    //printf("The value of a is %d and the value of b is %.4f\n", a, b);


     
    return 0;
}
