#include "main.h"
/**
*jack_bauer - prints every minute of the day of Jack Bauer
*Return:00:00 to 23:59
*/
void jack_bauer(void)
{
int i, b;

i = 0;

while (i < 24)
{
b = 0;

while (b < 60)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar(':');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
b++;
}
a++;
}
}
