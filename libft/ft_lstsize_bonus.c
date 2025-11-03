/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:48:53 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/15 17:26:39 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/* 
int	main(void)
{
	t_list	*l;

	l = ft_lstnew(ft_strdup("1"));
 	l->next = ft_lstnew(ft_strdup("2"));
 	l->next->next = ft_lstnew(ft_strdup("3"));
	ft_lstsize(l);
	return (0);
} */
