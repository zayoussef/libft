/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:12:47 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 20:21:46 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	size_t	i;
	char	*p;

	i = 0;
	if (s == NULL)
		return (0);
	l = ft_strlen(s);
	while (i + start < l && i < len)
		i++;
	p = malloc(i + 1);
	if (!p)
		return (0);
	l = 0;
	while (i > 0)
	{
		p[l++] = s[start++];
		i--;
	}
	p[l] = '\0';
	return (p);
}
