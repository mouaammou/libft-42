/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:23:46 by mouaammo          #+#    #+#             */
/*   Updated: 2022/10/27 15:23:16 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_size(size_t len_dest, size_t dstsize)
{
	if (dstsize > len_dest)
		return (len_dest);
	else
		return (dstsize);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	result;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	result = ft_check_size(len_dst, dstsize) + len_src;
	while ((i + len_dst) < (dstsize - 1) && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (result);
}
