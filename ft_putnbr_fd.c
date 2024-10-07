/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:05:24 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/27 18:56:52 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n_long;

	n_long = (long)n;
	if (-2147483648 <= n_long && n_long <= 2147483647)
	{
		if (n_long == -2147483648)
			ft_putstr_fd("-2147483648", fd);
		else if (n_long < 0)
		{
			n_long *= -1;
			ft_putchar_fd('-', fd);
			ft_putnbr_fd((int)n_long, fd);
		}
		else if (n_long >= 10)
		{
			ft_putnbr_fd((int)(n_long / 10), fd);
			ft_putnbr_fd((int)(n_long % 10), fd);
		}
		else
			ft_putchar_fd((int)n_long + '0', fd);
	}
}
