#include <stdio.h>

int main()
{
    label:
     printf("we are inside label\n");
     printf("Hello World");
     goto label;

    return 0;
}
