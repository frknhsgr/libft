#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *a;
	const char *b;
	size_t i;

	a = s1;
	b = s2;
	i = 0;
	while ((a[i] != '\0' || b[i] != '\0') && i < n)
	{
		if (a[i] != b[i])
			return ((unsigned char)a[i] - (unsigned char)b[i]);
		i++;
	}
	return (0);
}