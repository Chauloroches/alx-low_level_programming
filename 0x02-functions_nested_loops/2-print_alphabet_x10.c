#include "main.h"

/**
*print_alphabet_x10 - Print lowercase alphabet 10 times
*Rerurn: new line
*/

void print_alphabet_x10(void)
{
char value, b;

for (value = 0; value <= 9; value++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
