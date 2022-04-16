/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:29:42 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/14 16:47:50 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft__gtoken_size(const char *s, const char ch)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (s[i] == ch)
		i++;
	while (s[i] != ch && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

static size_t	ft__gntokens(const char *s, const char ch)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == ch)
			i++;
		if (s[i] != ch && s[i])
			n++;
		while (s[i] != ch && s[i])
			i++;
	}
	return (n);
}

static char	*ft__newstr(size_t size)
{
	char	*ptr;

	ptr = (char *)ft_calloc((size + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**token;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	token = (char **)ft_calloc((ft__gntokens(s, c) + 1), sizeof(*token));
	if (!token)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft__gntokens(s, c))
	{
		k = 0;
		token[i] = ft__newstr(ft__gtoken_size((s + j), c));
		if (!token[i])
			token[i] = NULL;
		while (*(s + j) == c)
			j++;
		while (*(s + j) != c && *(s + j))
			token[i][k++] = s[j++];
		i++;
	}
	return (token);
}
