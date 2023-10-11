/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhosgor <fhosgor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:28:30 by fhosgor           #+#    #+#             */
/*   Updated: 2023/10/11 16:47:02 by fhosgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	j;

	i = 0;
	a = malloc(len + 1);
	j = ft_strlen(s);
	if (start > j)
		return (NULL);
	if (!a)
		return (NULL);
	while (s[start] && i < len)
	{
		a[i] = s[start];
		start++;
		i++;
	}
	a[i] = '\0';
	return (a);
}