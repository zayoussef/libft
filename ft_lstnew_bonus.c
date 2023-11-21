/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:24:14 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/21 14:45:58 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int main ()
{
	int cn = 1337;
	t_list  *n_node = ft_lstnew(&cn);
	if (n_node != NULL)
		printf("====> create a node!\n");
	else
		printf("not create a node ");
	free(n_node);
	return (0);
}*/