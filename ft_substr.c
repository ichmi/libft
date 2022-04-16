/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:01:36 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/11 14:51:21 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char	*offset;
	char		*buff;
	char		*pb;

	if (!s || (int)start < 0)
		return (NULL);
	buff = (char *)malloc(len);
	if (!buff)
		return (NULL);
	pb = buff;
	offset = s + start;
	ft_strlcpy(buff, offset, len + 1);
	return (pb);
}
