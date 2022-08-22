/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:29:43 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/08/21 21:31:15 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inclue "libft.h"

long long	ft_atoll(const char *s)
{
	long long	result;
	int			sign;

	while (ft_isspace(*s))
		s++;
	sign = 1;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			sign = -1;
	result = 0;
	while (*s >= '0' && *s <= '9')
		result = (result * 10) + (*s++ - '0');
	return (result * sign);
}
