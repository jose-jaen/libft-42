/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:49:01 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/26 18:31:36 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_p;
	unsigned char	*s2_p;

	if (!n)
		return (0);
	i = 0;
	s1_p = (unsigned char *)s1;
	s2_p = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_p[i] != s2_p[i])
			return ((int)(s1_p[i] - s2_p[i]));
		i++;
	}
	return (0);
}
