/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:41:01 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/26 21:10:02 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s_p;

	s_p = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s_p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_p[i] = s[i];
		i++;
	}
	s_p[i] = '\0';
	return (s_p);
}
