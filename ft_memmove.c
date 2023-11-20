/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:04:07 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 19:58:07 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return ((void *)src);
	if (dest > src)
	{
		while (n - i > 0)
		{
			((char *)dest)[n - 1 - i] = ((char *)src)[n -1 - i];
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
int	main(void)
{
		char sr[] = "youssef";
	char des[] = "Hello, world";

	// Using ft_memmove to copy source to destination
	ft_memmove(des, sr, strlen(sr));

	// Print the destination string
	printf("Destination: %s\n", des);

	return (0);
}*/
