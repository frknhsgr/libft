#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *a;
	size_t i;

	a = s;
	i = 0;
	while (a[i] != '\0' && i < n)
	{
		if (a[i] == c)
			return ((char *)(a + i));
		i++;
	}
	return (0);
}