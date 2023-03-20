/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:00:34 by mouaammo          #+#    #+#             */
/*   Updated: 2022/10/27 14:49:51 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*dest;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	str = (char *)src;
	dest = (char *)dst;
	i = 0;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
