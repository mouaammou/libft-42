/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:35:46 by mouaammo          #+#    #+#             */
/*   Updated: 2022/10/26 13:34:23 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static int	word_count(const char *str, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (count);
}

static char	*get_word_len(const char *s1, int *index, char c)
{
	char	*copy;
	size_t	word_len;
	int		i;

	while (s1[*index] && s1[*index] == c)
		(*index)++;
	i = *index;
	word_len = 0;
	while (s1[i] != c && s1[i])
	{
		word_len++;
		i++;
	}
	copy = malloc(sizeof(char) * (word_len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[*index] && s1[*index] != c)
		copy[i++] = s1[(*index)++];
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		index;
	int		wc;
	int		i;

	index = 0;
	i = 0;
	if (!s)
		return (NULL);
	wc = word_count(s, c);
	arr = (char **) malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	arr[wc] = NULL;
	while (i < wc)
	{
		arr[i] = get_word_len(s, &index, c);
		if (!arr[i])
			return (free_all(arr));
		i++;
	}
	return (arr);
}
