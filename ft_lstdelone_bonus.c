/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:28:57 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 16:14:52 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*void    del(void *ft_free)
{
	free(ft_free);
}

int	main(void)
{
	t_list *y = ft_lstnew(strdup("0"));
	t_list *tmp = ft_lstnew(strdup("0"));
	ft_lstadd_front(&tmp, y);
	ft_lstadd_front(&tmp, ft_lstnew(strdup("1")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("2")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("3")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("4")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("5")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("6")));
	t_list *r = tmp;
	while(tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	tmp = r;
	printf("-----------------------------------------\n\n");
	r = tmp->next;
	ft_lstdelone(tmp, &del);
	while(r)
	{
		printf("%s\n", r->content);
		r = r->next;
	}
}*/