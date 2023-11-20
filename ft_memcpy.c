/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:23:32 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 19:14:23 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*d;

	p = (char *)dest;
	d = (char *)src;
	i = 0;
	if (d == NULL && p == NULL)
		return (NULL);
	if (dest == src)
		return ((void *)src);
	while (i < n)
	{
		p[i] = d[i];
		i++;
	}
	return (p);
}

/*int	main(void)
{
	char *o = "ss";
	char ee[10];
	char *p = ft_memcpy(o, o, 1);
	printf("%s", p);
}*/