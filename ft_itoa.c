/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:11:13 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/15 17:32:52 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_digit(long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	if (n == 0)
		count++;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		i;
	char	*str;

	nbr = n;
	i = ft_len_digit(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nbr == 0)
		str[0] = 48;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[i--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}

/*int	main(void)
{
	int y[] = {-1, 2, 33, 0, -45999, INT_MAX, INT_MIN};
	int i = 0;

	while (i < 6)
	{
		char *rs = ft_itoa(y[i]);
		printf("ft_itoa(%d) = %s\n", y[i], rs);
		free(rs);
		i++;
	}

	return (0);
}*/