/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:35:40 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/25 21:21:48 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*s1_p;
	const unsigned char	*s2_p;
	size_t				i;

	if (!n)
		return (0);
	i = 0;
	s1_p = (const unsigned char *)s1;
	s2_p = (const unsigned char *)s2;
	while (*s1_p == *s2_p && *s1_p && i < n - 1)
	{
		i++;
		s1_p++;
		s2_p++;
	}
	return (*s1_p - *s2_p);
}
