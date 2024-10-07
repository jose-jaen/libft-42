/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:27:43 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/27 20:29:42 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n_s;
	char	*substr;

	if (!s)
		return (NULL);
	n_s = ft_strlen(s);
	if (start >= n_s)
		return (ft_strdup(""));
	if (n_s - start > len)
		n_s = len;
	else
		n_s -= start;
	substr = (char *)malloc((n_s + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
