/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:05:15 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/16 12:26:54 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*b;

	b = *lst;
	while (b)
	{
		del(b->content);
		*lst = (*lst)->next;
		free(b);
		b = *lst;
	}
}

/* int	main(void)
{
	t_list *l = ft_lstnew(ft_strdup("nyancat"));
 	l->next = ft_lstnew(ft_strdup("#TEST#"));
	ft_lstclear(&l, free);
	return (0);
} */
