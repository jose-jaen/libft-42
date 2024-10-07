/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:52:09 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/09/27 18:24:49 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_all(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}

int	ft_count_words(char const *s, char c)
{
	int	n_elements;
	int	i;
	int	is_word;

	i = 0;
	is_word = 0;
	n_elements = 0;
	while (s[i])
	{
		if (s[i] != c && !is_word)
		{
			is_word = 1;
			n_elements++;
		}
		if (s[i] == c && is_word)
			is_word = 0;
		i++;
	}
	return (n_elements);
}

char	*ft_assign_word(int i, char const *s, char c, char **res)
{
	int		n;
	int		start;
	char	*word;

	n = 0;
	while (s[i + n] != c && s[i + n])
		n++;
	word = (char *)malloc((n + 1) * sizeof(char));
	if (!word)
	{
		ft_free_all(res);
		return (NULL);
	}
	start = 0;
	while (start < n)
	{
		word[start] = s[i + start];
		start++;
	}
	word[start] = '\0';
	return (word);
}

int	ft_assign_words(char **res, int size, char const *s, char c)
{
	int	is_word;
	int	i;
	int	k;

	i = 0;
	is_word = 0;
	k = 0;
	while (k < size)
	{
		if (s[i] != c && !is_word)
		{
			is_word = 1;
			res[k] = ft_assign_word(i, s, c, res);
			if (!res[k])
			{
				ft_free_all(res);
				return (0);
			}
			k++;
		}
		if (s[i] == c && is_word)
			is_word = 0;
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		n_elements;
	char	**res;

	if (!s)
		return (NULL);
	n_elements = ft_count_words(s, c);
	res = (char **)malloc((n_elements + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!ft_assign_words(res, n_elements, s, c))
		return (NULL);
	res[n_elements] = NULL;
	return (res);
}
