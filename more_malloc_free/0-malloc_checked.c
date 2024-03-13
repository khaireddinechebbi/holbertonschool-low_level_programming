#include "main.h"
#include <stdlib>
/**
* *malloc_checked - allocates memory using malloc
* @b: unsigned int
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL) {
fprintf(stderr, "Error: malloc failed\n");
exit(98); // Terminate with status value 98
}
    
return ptr;
}
