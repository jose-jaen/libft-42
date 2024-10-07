/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:14:38 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/16 18:49:24 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}
