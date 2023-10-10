#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    char *dest;
    char *sorc;
    size_t i;
    
	i = 0;
    dest = dst;
    sorc  = (char *)src;
    if (dstsize > 0)
    {
        while (sorc[i] && i < dstsize - 1)
        {
            dest[i] = sorc[i];
            i++;
        }
        dest[i] = '\0';
    }
    i = ft_strlen(src);
	return (i);
}