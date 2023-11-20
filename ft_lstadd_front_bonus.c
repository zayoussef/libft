/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:25:08 by yozainan          #+#    #+#             */
/*   Updated: 2023/11/02 18:25:09 by yozainan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
  t_list *B = (t_list *)malloc(sizeof(t_list));

  B->content = (char *)strdup("yahya");
  B->next = NULL;
  t_list **tmp = NULL;
  tmp = &B;
 t_list *y =(t_list *)malloc(sizeof(t_list));

 y->content = (char *)strdup("boushra");
 y->next = NULL;

 ft_lstadd_front(tmp, y);

 t_list *p;
 p = *tmp;
 while (p)
 {
   printf("%s==== ", p->content);
   p = p->next;
  }
}*/