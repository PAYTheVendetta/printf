/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 18:49:38 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/31 19:10:41 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcchar(char *text, int c)
{
	size_t	n;
	size_t	count_arg;

	n = 0;
	count_arg = 0;
	if (!text || !c)
		return (0);
	while (text[n])
	{
		if (text[n] == c)
		{
			count_arg++;
		}
		n++;
	}
	return (count_arg);
}
