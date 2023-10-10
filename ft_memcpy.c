#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t a;

	a = 0;
	while (a < n)
	{
		((char *)dst)[a] = ((char *)src)[a];
		a++;
	}
	return dst;
}