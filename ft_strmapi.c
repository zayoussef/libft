/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:11:28 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 19:00:02 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ps;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	ps = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (ps == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ps[i] = (*f)(i, s[i]);
		i++;
	}
	ps[i] = '\0';
	return (ps);
}

/*char print(unsigned int i, char s)
{
	s -= 32;
	return (s);
}

int main()
{
	const char *test = "youssef";
	char *rs = ft_strmapi(test, &print);

	printf("original: %s\n", test);
	printf("new: %s\n", rs);

	free (rs);
}*/