/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:02:49 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/18 14:16:10 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buff;
	unsigned int	i;

	if (s && f)
	{
		buff = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
		if (!buff)
			return (NULL);
		i = 0;
		while (*s)
		{
			*(buff + i) = f(i, *s++);
			i++;
		}
		return (buff);
	}
	return (NULL);
}
