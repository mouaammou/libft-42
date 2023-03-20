/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:33:24 by mouaammo          #+#    #+#             */
/*   Updated: 2022/10/27 10:54:49 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst)
		return ;
	while ((*lst))
	{
		if (del)
			del((*lst)->content);
		temp = *lst;
		(*lst) = (*lst)->next;
		free(temp);
	}
	*lst = NULL;
}
