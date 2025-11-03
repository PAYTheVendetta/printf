/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:02:02 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/21 17:33:46 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		n[4];

	n[0] = 0;
	n[1] = 1;
	n[2] = 0;
	while ((nptr[n[0]] >= 9 && nptr[n[0]] <= 13) || nptr[n[0]] == 32)
		n[0]++;
	if (nptr[n[0]] == '-' || nptr[n[0]] == '+')
	{
		if (nptr[n[0]] == ('-'))
			n[1] = n[1] * -1;
		n[0]++;
	}
	while (ft_isdigit(nptr[n[0]]))
	{
		if (!ft_isdigit(nptr[n[0] + 1]))
		{
			n[2] = n[2] * 10 + (nptr[n[0]] - '0');
			return (n[1] * n[2]);
		}
		else
			n[2] = n[2] * 10 + (nptr[n[0]] - '0');
		n[0]++;
	}
	return (0);
}

/* 
int	main(void)
{
	printf("mi funcion: %d\n", ft_atoi(" \n --21a-p0sda234ab567"));
	printf("original:   %d\n", atoi(" \n -21a-ap0sda234ab567"));
	return (0);
} */
/* 
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
} */
