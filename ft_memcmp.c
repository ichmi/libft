/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:51:03 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/08 00:07:23 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (!s1 || !s2)
		return (0);
	p1 = s1;
	p2 = s2;
    while (n--)
	{
        if (*p1 != *p2)
            return (*p1 - *p2);
		p1++;
		p2++;
	}
    return (0);
}
