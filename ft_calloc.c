/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:37:17 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 18:54:19 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size && nmemb >= SIZE_MAX / size)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem != NULL)
		ft_bzero(mem, nmemb * size);
	return (mem);
}

/*int	main(void)
{
	char *char_array = (char *)ft_calloc(10, sizeof(char));
	if (char_array != NULL)
	{
		printf("Allocated array of char elements:\n");
		for (size_t i = 0; i < 10; i++)
		{
			printf("%u", char_array[i]);
		}
		printf("\n");
		free(char_array);
	}
	else
	{
		printf("Allocation failed.\n");
	}

	return (0);
}*/