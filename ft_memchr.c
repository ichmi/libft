/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:21:55 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/04 22:08:55 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char	*ptr;

	if (!s || c == 0)
		return (NULL);
	ptr = (unsigned char *)s;
    while (n--)
	{
        if(*ptr == (unsigned char)c)
            return (ptr);
		ptr++;
	}
    return (NULL);
}
