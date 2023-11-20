/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:03:52 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 18:31:50 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main ()
{
	int i = 0;
	char *arr[] = {"helhfghfghfglo", "chekc", "llosos",
		"Hellos ccvbxcbvxcbvhkeklhlsdfs "};
	while (i < (sizeof(arr) / sizeof(arr[0])))
	{
		printf("%zu\n", ft_strlen(arr[i]));
		i++;
	}
}*/