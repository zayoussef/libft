/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:23:08 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/21 16:18:46 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

/*int	main(void)
{
	char y[] = "youssef";
	int c = '\0';
	char *result = ft_memchr(y, c, sizeof(y));

	if (result != NULL)
	{
		size_t index = result - y;
		printf("'%c' found at index '%zu'\n", c, index);
	}
	else
	{
		printf("'%c' not found in the string.\n", c);
	}

	return (0);
}*/