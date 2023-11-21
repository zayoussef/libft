/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:10:39 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/21 18:27:07 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	size_t	j;
	char	*substr;
	size_t	m;

	beg = 0;
	end = 0;
	m = 1;
	substr = NULL;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	while (s1[beg] && search(s1[beg], set) == 0)
		beg++;
	while (s1[end - m] && search(s1[end - m], set) == 0)
		m++;
	end -= m - 1;
	j = end - beg;
	substr = ft_substr(s1, beg, j);
	return (substr);
}
