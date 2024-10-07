/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:50:22 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/26 19:31:13 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	new_c;

	new_c = (unsigned char)c;
	if (!s && new_c)
		return (NULL);
	while (*s)
	{
		if (*s == new_c)
			return ((char *)s);
		s++;
	}
	if (new_c == '\0')
		return ((char *)s);
	return (NULL);
}
