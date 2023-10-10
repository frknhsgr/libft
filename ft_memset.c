#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t a;
	char *dest;

	dest = b;
	a = 0;

	while (a < len)
	{
		dest[a] = c;
		a++;
	}

	return (b);
}
