#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;

    len = _printf("Let's try to printf: %c\n", 'H');
    printf("Length: %d\n", len);

    len = _printf("And some more: %s\n", "This is a string");
    printf("Length: %d\n", len);

    len = _printf("%% and %s\n", "This is another string");
    printf("Length: %d\n", len);

    return (0);
}
