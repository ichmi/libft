/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:28:36 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/16 16:25:30 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*buffer;
	char	*pbuff;

	if (!s)
		return (NULL);
	buffer = (char *)malloc(ft_strlen(s));
	if (!buffer)
		return (NULL);
	pbuff = buffer;
	while (*s)
		*buffer++ = *(char *)s++;
	*buffer = '\0';
	return (pbuff);
}
