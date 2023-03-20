/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:12:19 by mouaammo          #+#    #+#             */
/*   Updated: 2022/10/26 22:00:12 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*str;
	size_t	i;
	size_t	move;

	dest = (char *) dst;
	str = (char *) src;
	if (str == 0 && dest == 0)
		return (0);
	i = 0;
	move = len - 1;
	while (i < len)
	{
		if (dest > str)
			dest[move - i] = str[move - i];
		else
			dest[i] = str[i];
		i++;
	}
	return (dest);
}
