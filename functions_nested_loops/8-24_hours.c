#include "main.h"
/**
* jack_bauer - prints every minutes
* @
*/
void jack_bauer(void)
{
int mn, hr ;
for (hr = 0; hr < 24; hr++)
{
for (mn = 0; mn < 60; mn++)
{
_putchar(hr/10 + '0');
_putchar(hr%10 + '0');
_putchar(':');
_putchar(mn/10 + '0');
_putchar(mn%10 + '0');
_putchar('\n');
}
}
}
