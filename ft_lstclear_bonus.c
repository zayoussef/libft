/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:29:40 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 15:24:10 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

// void	del(void *content)
// {
// 	free(content);
// }
/*int	main(void)
{
	t_list **q;
	// t_list *y = ft_lstnew(strdup("2"));
	t_list *tmp = ft_lstnew(strdup("3.5"));
	// ft_lstadd_front(&tmp, );kk
	q = &tmp;
	ft_lstadd_back(q, ft_lstnew(strdup("3")));
	ft_lstadd_back(q, ft_lstnew(strdup("2.5")));
	ft_lstadd_back(q, ft_lstnew(strdup("2")));
	ft_lstadd_front(q, ft_lstnew(strdup("4")));
	ft_lstadd_back(q, ft_lstnew(strdup("1")));
	ft_lstadd_front(q, ft_lstnew(strdup("5.5")));
	ft_lstadd_front(q, ft_lstnew(strdup("6")));

	t_list *r = *q;
	while (r)
	{
		printf("%s\n", r->content);
		r = r->next;
	}

	printf("-----------------------------------------\n\n");

	tmp = r;
	ft_lstclear(&tmp, &del);
	return (0);
}*/