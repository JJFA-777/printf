#include <stdio.h>
#include "main.h"

int main(void)
{
    int len = 0;
    int len1 = 0;

    len = _printf("%% and %s\n", "This is another string");
    printf("Length: %d\n", len);

    len1 = printf("%% and %s\n", "This is another string");
    printf("Length: %d\n", len1);

    return (0);
}
