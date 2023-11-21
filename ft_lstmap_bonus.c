/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:30:44 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/21 17:50:11 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*s;
	void	*c;

	if (!lst || !f || !del)
		return (NULL);
	s = NULL;
	while (lst)
	{
		c = f(lst->content);
		p = ft_lstnew(c);
		if (p == NULL)
		{
			free(c);
			ft_lstclear(&s, del);
			return (NULL);
		}
		ft_lstadd_back(&s, p);
		lst = lst->next;
	}
	return (s);
}

/*void	del(void *content)
{
	free(content);
}

void	*f(void *c)
{
	void	*p;

	p = malloc(sizeof(c) + 1);
	p = memcpy(p, c, strlen(c) + 1);
	return (p);
}

int	main(void)
{
	t_list *o;
	ft_lstadd_back(&o, ft_lstnew(strdup("0")));
	ft_lstadd_back(&o, ft_lstnew(strdup("1")));
	ft_lstadd_back(&o, ft_lstnew(strdup("2")));
	t_list *tmp;
	tmp = ft_lstmap(o, &f, &del);
	while (tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
}*/