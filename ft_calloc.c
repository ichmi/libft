/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:00:21 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/25 20:52:05 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	numb;

	if (nmemb == 0 || size == 0)
		return (NULL);
	numb = nmemb * size;
	p = malloc(numb);
	if (!p)
		return (NULL);
	ft_bzero(p, numb);
	return (p);
}
