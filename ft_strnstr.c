/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:27:21 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 18:43:07 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0' && little[j])
	{
		if (big[i] == little[j])
		{
			i++;
			j++;
			if (j == ft_strlen(little))
				return ((char *)big + i - j);
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return (NULL);
}

/*int	main(void)
{
	char *s = "youssef";
	char *d = "o";
	printf("%s\n", ft_strnstr(s, d, 7));
}*/