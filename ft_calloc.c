/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:50:30 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/26 21:04:15 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*gptr;

	gptr = malloc(nmemb * size);
	if (!gptr)
		return (NULL);
	ft_bzero(gptr, nmemb * size);
	return (gptr);
}
