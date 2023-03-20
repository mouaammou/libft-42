/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:05:19 by mouaammo          #+#    #+#             */
/*   Updated: 2022/10/27 16:44:31 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*ret;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (ft_strchr(set, s1[len - 1]) != NULL && len)
		len--;
	if (len - i < 0)
		return (ft_strdup(""));
	ret = ft_substr(s1, i, len - i);
	return (ret);
}
