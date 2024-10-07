/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:45:26 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/22 16:29:59 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	int	is_blank;

	is_blank = c == ' ' || c == '\t';
	if (c == '\f' || c == '\n' || c == '\r' || c == '\v' || is_blank)
		return (1);
	return (0);
}

static int	ft_power(int base, int exp)
{
	int	res;

	res = 1;
	while (exp > 0)
	{
		res *= base;
		exp--;
	}
	return (res);
}

static int	ft_get_number(const char *nptr)
{
	int	i;
	int	n;
	int	res;
	int	candidate;

	i = 0;
	n = 0;
	res = 0;
	while (ft_isdigit(*nptr))
	{
		n++;
		nptr++;
	}
	while (i < n)
	{
		candidate = *(nptr - n + i);
		res += (candidate - '0') * ft_power(10, n - i - 1);
		i++;
	}
	return (res);
}

int	ft_atoi(const char *nptr)
{
	int	sign;

	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	return (ft_get_number(nptr) * sign);
}
