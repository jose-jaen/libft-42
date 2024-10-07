/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:46:45 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/26 20:23:46 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n_dst;

	if (!size)
		return (ft_strlen(src));
	n_dst = ft_strlen(dst);
	if (size <= n_dst)
		return (size + ft_strlen(src));
	i = 0;
	while (n_dst + i < size - 1 && src[i])
	{
		dst[n_dst + i] = src[i];
		i++;
	}
	dst[n_dst + i] = '\0';
	while (src[i])
		i++;
	return (n_dst + i);
}
