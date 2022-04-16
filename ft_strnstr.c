/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:36:09 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/16 16:27:27 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		substr_len;
	size_t		i;
	size_t		j;

	if (!big || !little)
		return (NULL);
	substr_len = ft_strlen(little);
	if (!substr_len)
		return ((char *)big);
	i = 0;
	j = 0;
	while (len-- && big[i])
	{
		while (big[i + j] == little[j])
		{
			if (j == (substr_len - 1))
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
