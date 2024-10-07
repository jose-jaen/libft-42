/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:47:20 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/27 20:41:56 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dest_p;
	unsigned char			*src_p;

	if (!dest && !src)
		return (dest);
	i = 0;
	dest_p = (unsigned char *)dest;
	src_p = (unsigned char *)src;
	while (i < n)
	{
		dest_p[i] = src_p[i];
		i++;
	}
	return (dest);
}
