/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:37:10 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/27 20:33:30 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;
	char			*s1_trim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_in(s1[i], set) && s1[i])
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (ft_in(s1[j], set) && s1[j] && j > i)
		j--;
	s1_trim = (char *)malloc(((j - i + 1) + 1) * sizeof(char));
	if (!s1_trim)
		return (NULL);
	start = i;
	i = 0;
	while (start <= j)
		s1_trim[i++] = s1[start++];
	s1_trim[i] = '\0';
	return (s1_trim);
}
