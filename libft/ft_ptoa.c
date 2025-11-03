/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:06:29 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/01 17:21:22 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ptoa(void *address)
{
	size_t	count;
	ssize_t	num;

	num = (ssize_t)address;
	count = ft_putstr_fd("0x", 1);
	count = count + ft_putstr_fd(ft_up_hetoa(num), 1);
	return (count);
}
