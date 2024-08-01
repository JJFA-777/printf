#include <stdio.h>
#include "main.h"

int main(void)
{
    int len = 0;
    int len1 = 0;

    len = _printf("String:[%s] %c\n", "I am a string !", 65);
	printf("Length: %d\n", len);

    len1 = printf("String:[%s]\n", "I am a string !");
	printf("Length: %d\n", len1);

    return (0);
}
