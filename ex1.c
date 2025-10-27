#include <stdio.h>
/*
print multiplication table of a number entered by the user in pretty form

example:

input:
Enter the number you want multiplication table of:
6

output:
table of 6:
6 x 1 = 6
6 x 2 = 12
6 x 3 = 18 
6 x 4 = 24
6 x 5 = 30
6 x 6 = 36
6 x 7 = 42 
6 x 8 = 48
6 x 9 = 54 
6 x 10 = 60
*/

int main()
{
    int n; // user ka number store karne ke liye variable
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &n); // user se number lena

    printf("Table of %d:\n", n); // heading print karna

    for (int i = 1; i <= 10; i++) // loop 1 se 10 tak
    {
        printf("%d x %d = %d\n", n, i, n * i); // table print karna
    }

    return 0;
}
