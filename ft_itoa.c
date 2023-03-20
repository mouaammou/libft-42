/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:00:40 by mouaammo          #+#    #+#             */
/*   Updated: 2022/10/25 03:10:31 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*swap(char *str, int len, int n)
{
	int		i;
	char	temp;

	i = 0;
	if (n < 0)
		len++;
	while (i < (len / 2))
	{
		temp = str[len - 1 - i];
		str[len - 1 - i] = str[i];
		str[i++] = temp;
	}
	if (n == 147483648)
	{
		str[0] = '-';
		str[1] = '2';
	}
	return (str);
}

static int	ft_nb(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	else if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count = 1;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*allocate_str(int *len, int *n)
{
	char	*str;

	str = malloc(sizeof (char) * ((*len) + 1));
	if (!str)
		return (0);
	str[*len] = '\0';
	if (*n < 0)
	{
		*n = (*n) * (-1);
		str[(*len) - 1] = '-';
		(*len)--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*str;
	int		nbr;

	len = ft_nb(n);
	if (n == -2147483648)
		n = 147483648;
	nbr = n;
	str = allocate_str(&len, &n);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	return (swap(str, len, nbr));
}
