/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:20:30 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/28 13:05:51 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		is_match;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		is_match = big[i + j] == little[j];
		while (i + j < len && big[i + j] && little[j] && is_match)
		{
			j++;
			is_match = big[i + j] == little[j];
		}
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
