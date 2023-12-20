#include <stdio.h>


/**
*numLength - returns the lenth of string
*@a : number
*Return: num of digits
*/

int numLength(int a)
{
int length = 0;

if (!a)
{
return (1);
}

while (a)
{
a = a / 10;
length += 1;
}

return (length);
}
/**
*main - prints the first 98 fibonaci sequences
*Return: 0
*/

int main(void)
{
unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
short int b = 1, initial0s;

while (b <= 98)
{
if (f1o > 0)
printf("%lu", f1o);
initial0s = numLength(mx) - 1 - numLength(f1);
while (f1o > 0 && initial0s > 0)
{
printf("%i", 0);
initial0s--;
}
printf("%lu", f1);

tmp = (f1 + f2) % mx;
tmpo = f1o + f2o + (f1 + f2) / mx;
f1 = f2;
f1o = f2o;
f2 = tmp;
f2o = tmpo;

if (b != 98)
printf(", ");
else
printf("\n");
b++;
}
return (0);
}

