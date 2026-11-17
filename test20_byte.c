#include <stdio.h>

int main(void)
{
    printf("Type of int has a size of %zd bytes.\n", sizeof(int));
    printf("Type of char has a size of %zd bytes.\n", sizeof(char));
    printf("Type of long has a size of %zd bytes.\n", sizeof(long));
    printf("Type of long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type of double has a size of %zd bytes.\n", sizeof(double));
    printf("Type of long double has a size of %zd bytes.\n", sizeof(long double));

    return 0;
}