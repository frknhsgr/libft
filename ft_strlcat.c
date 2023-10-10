#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;
	
	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	l= j;
	if ((dstsize == 0) || (dstsize <= j))
		return (k + dstsize);
	while (src[i] != '\0' && i < dstsize - l - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (k + l);
}
#include <stdio.h>
#include <string.h>

int main()
{
	char dst1[] = "furkan";
	char dst2[] = "furkan";
	char *src = "yavuz";
	printf("%zu kaynak = %s\n", strlcat(dst1, src, 6), dst1);
	printf("%zu kaynak = %s", ft_strlcat(dst2, src, 6), dst2);
}