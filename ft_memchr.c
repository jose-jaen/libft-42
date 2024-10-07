/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:23:44 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/27 20:52:29 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c_new;
	unsigned char	*s_p;

	i = 0;
	c_new = (unsigned char)c;
	s_p = (unsigned char *)s;
	while (i < n)
	{
		if (s_p[i] == c_new)
			return ((void *)(s_p + i));
		i++;
	}
	return (NULL);
}
