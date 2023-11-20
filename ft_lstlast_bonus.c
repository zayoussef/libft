/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:27:41 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/20 09:39:13 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		if (!tmp->next)
		{
			return (tmp);
		}
		tmp = tmp->next;
	}
	return (tmp);
}

/*int main()
{
	t_list *list = NULL;
	ft_lstadd_front(&list, ft_lstnew(strdup("youssef")));
	ft_lstadd_front(&list, ft_lstnew(strdup("blabvla")));
	ft_lstadd_front(&list, ft_lstnew(strdup("dddddd")));
	ft_lstadd_front(&list, ft_lstnew(strdup("aaaaaaa")));
	int i =  ft_lstsize(list);
	t_list *rr = ft_lstlast(list);
	printf("%s\n", rr->content);
	printf("%d\n", i);
	while(list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}

}*/