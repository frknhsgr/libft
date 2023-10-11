/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhosgor <fhosgor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:28:07 by fhosgor           #+#    #+#             */
/*   Updated: 2023/10/11 16:28:08 by fhosgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *s;
	size_t i;
	int j;

	j = 0;
	i = ft_strlen(s1);
	s = malloc(i + 1);
	if (s == 0)
		return (0);
	ft_strlcpy(s, s1, i + 1);
	return (s);
}