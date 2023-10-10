#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t a;
	char *dest;

	a = 0;
	dest = s;
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

}

