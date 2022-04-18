/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:01:36 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/18 14:52:02 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;

	if (!s || (int)start < 0)
		return (NULL);
	buff = (char *)ft_calloc((len + 1), sizeof(char));
	if (!buff)
		return (NULL);
	ft_strlcpy(buff, (s + start), (len + 1));
	return (buff);
}
