/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:54:25 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 19:08:50 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	int		u[10];
	void	*e;

	e = ft_memset((void *)u, '1', 10);
	// printf("%", ft_memset(u, '0', 10));
	for (int i = 0; i <= 10; i++)
	{
		printf("%c\n", ((char *)e)[i]);
	}
}*/
