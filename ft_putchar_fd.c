/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:11:59 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 21:48:03 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

/*int	main()
{
	int fd = open("sch.c", O_WRONLY | O_CREAT, 0644);
	//printf("%d\n", fd);
	ft_putchar_fd('c', 5);
	write(1, "\n", 1);
	//close(fd);
}*/