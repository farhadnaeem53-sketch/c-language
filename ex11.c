#include <stdio.h>

// function declaration
int sum(int a, int b);
void printstar(int n);

// main function
int main()
{
    int a, b, c;

    a = 9;
    b = 87;

    c = sum(a, b);
    printf("The sum is %d \n", c);

    printstar(5);

    return 0;
}

// function definition
int sum(int a, int b)
{
    return a + b;
}

// function definition
void printstar(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}
