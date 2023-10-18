/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhosgor <fhosgor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:26:46 by fhosgor           #+#    #+#             */
/*   Updated: 2023/10/16 16:52:12 by fhosgor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	a;
	char	*dest;

	a = 0;
	dest = s;
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
}
