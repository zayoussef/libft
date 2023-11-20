/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:26:27 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 09:39:29 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	if (!lst)
		return (0);
	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

/*int main()
{
	t_list *list = NULL;
	ft_lstadd_front(&list, ft_lstnew(strdup("youssef")));
	ft_lstadd_front(&list, ft_lstnew(strdup("blabvla")));
	ft_lstadd_front(&list, ft_lstnew(strdup("dddddd")));
	ft_lstadd_front(&list, ft_lstnew(strdup("aaaaaaa")));
	int i =  ft_lstsize(list);
	printf("%d\n", i);
	while(list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
}*/