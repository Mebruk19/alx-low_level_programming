#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Print a random number and states whether
 *       it is positive, negative, or zero.
 *
 *Retur: Always 0.
 */
int main(void)
{
int n;

srand(ime(0))
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\" n);
else

printf("%d is zero\n", n);

return (0)
}
