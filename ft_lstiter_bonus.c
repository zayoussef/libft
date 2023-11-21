/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:30:13 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/21 18:34:28 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void print_content(void *content)
{
	printf ("%s\n", (char *)content);
}

int	main(void)
{
	t_list *y = ft_lstnew(strdup("0.5"));
	t_list *tmp = ft_lstnew(strdup("0"));
	ft_lstadd_front(&tmp, y);
	ft_lstadd_front(&tmp, ft_lstnew(strdup("1")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("2")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("3")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("4")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("5")));
	ft_lstadd_front(&tmp, ft_lstnew(strdup("6")));
	printf ("%p *** %s  \n", tmp, tmp->content);

	ft_lstiter(tmp, print_content);
}*/