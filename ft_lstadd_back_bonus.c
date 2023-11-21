/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:25:30 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/21 17:28:38 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (lst == NULL || new == NULL)
		return ;
	p = *lst;
	if (*lst)
	{
		p = ft_lstlast(p);
		p->next = new;
	}
	else
		*lst = new;
}

/*int main ()
{
	t_list *p = ft_lstnew("1337");
	t_list *tmp;
	ft_lstadd_back(&tmp, p);
	ft_lstadd_back(&tmp, ft_lstnew("13"));

	if (tmp)
	{

		printf("%s\n", tmp->content);
		tmp = tmp->next;
		printf("%s\n", tmp->content);

	}
}*/