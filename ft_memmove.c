#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	const char *sorc;
	char *dest;
	size_t i;

	sorc = src;
	dest = dst;
	i = 0;
	if (len == 0 || dst == src)
		return dst;
	else if (dst < src)
	{
		while(i < len)
		{
			dest[i] = sorc[i];
			i++;
		}
	}
	else if (src < dst)
	{
		while (len > 0)
		{
			len--;
			dest[len] = sorc[len];
		}
	}
	return (dest);
}