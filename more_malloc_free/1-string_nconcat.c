#include "main.h"
#include <stdlib.h>
/**
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, ln1 = 0, ln2 = 0;
char *s;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[ln1])
ln1++;
while (s2[ln2])
ln2++;

if (ln2 > n)
{
s = malloc(sizeof(char) * (k + n + 1));

}

if (ln2 <= n)
s = malloc(sizeof(char) * (k + j + 1));

if (s == NULL)
return (NULL);

for (i = 0; )
}
