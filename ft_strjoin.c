/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhosgor <fhosgor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:47:22 by fhosgor           #+#    #+#             */
/*   Updated: 2023/10/11 18:04:33 by fhosgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *a;
	size_t i;

	i = ft_strlen(s1) + ft_strlen(s2);
	a = malloc(i + 1);
	if (!a)
		return (NULL);
	ft_strlcat(a, s1, i);
	ft_strlcat(a, s2, i + 1);
	return (a);
}