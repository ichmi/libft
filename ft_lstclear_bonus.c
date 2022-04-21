/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:36:37 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/21 13:05:15 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*store;
	t_list	*p;

	if (!lst || !del)
		return ;
	p = *lst;
	while (p)
	{
		store = p->next;
		ft_lstdelone(p, del);
		p = store;
	}
	*lst = NULL;
}
