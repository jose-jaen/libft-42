/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:25:53 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/27 17:45:23 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int nbr)
{
	long	nb;
	size_t	n;

	n = 1;
	nb = (long)nbr;
	if (nb < 0)
	{
		n++;
		nb *= -1;
	}
	while (nb >= 10)
	{
		n++;
		nb /= 10;
	}
	return (n);
}

static void	ft_convert_number(char *str, long nbr, size_t len)
{
	size_t	i;

	i = 1;
	while (nbr >= 10)
	{
		str[len - i] = ((int)(nbr % 10)) + '0';
		nbr /= 10;
		i++;
	}
	str[len - i] = nbr + '0';
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nbr;
	char	*str;

	len = ft_nbrlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	nbr = (long)n;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	ft_convert_number(str, nbr, len);
	return (str);
}
