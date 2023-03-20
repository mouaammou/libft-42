/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:19:25 by mouaammo          #+#    #+#             */
/*   Updated: 2022/10/24 18:22:17 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	atoi_counter(const char *str, int i, int sign)
{
	long	result;
	long	max;
	long	min;

	max = 9223372036854775807;
	min = -9223372036854775807;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i++] - '0') + result * 10;
	}
	if (result > max && sign == -1)
		return (0);
	else if (result < min && sign == 1)
		return (-1);
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (atoi_counter(str, i, sign));
}
