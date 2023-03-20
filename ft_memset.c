/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:12:48 by mouaammo          #+#    #+#             */
/*   Updated: 2022/10/27 13:48:29 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
