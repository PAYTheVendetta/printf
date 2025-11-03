/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:02:02 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/01 15:11:31 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convierte un int en un char reservando memoria para ello,
//es decir, yo tengo 236 de vuelve un "236".

#include "libft.h"

static int	lennun(unsigned int n)
{
	int		count;

	count = 0;
	while ((n / 10) != 0)
	{
		n = n / 10;
		count++;
	}
	return (count + 1);
}

static char	*training(long n, int count, char *num)
{
	while (count >= 0 && num[count] != '-')
	{
		num[count] = (n % 10) + '0';
		n = n / 10;
		count--;
	}
	return (num);
}

char	*ft_utoa(unsigned int n)
{
	char	*num;
	long	nlon;
	int		count;

	nlon = (long)n;
	if (nlon < 0)
	{
		nlon = nlon * -1;
		count = lennun(n);
		num = ft_calloc((count + 2), sizeof(char));
		if (!num)
			return (NULL);
		num[0] = '-';
		num[count] = '\0';
	}
	else
	{
		count = lennun(n);
		num = ft_calloc((count + 1), sizeof(char));
		if (!num)
			return (NULL);
		num[count--] = '\0';
	}
	return (training(nlon, count, num));
}
