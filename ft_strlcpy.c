/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:12:27 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/10 13:58:17 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	char		*ps;
	size_t		blefts;

	if (!src || !dest)
		return (0);
	ps = (char *)src;
	blefts = n;
	if (blefts != 0)
		while (--blefts)
			if ((*dest++ = *src++) == '\0')
				break ;
	if (blefts == 0)
	{
		if (n)
			*dest = '\0';
		while (*src++)
			continue ;
	}
	return (src - ps - 1);
}
