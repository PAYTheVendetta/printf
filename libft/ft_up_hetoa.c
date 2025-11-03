/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up_hetoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:02:02 by aialonso          #+#    #+#             */
/*   Updated: 2025/11/01 17:29:41 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convierte un int en un char reservando memoria para ello,
//es decir, yo tengo 236 de vuelve un "236".

#include "libft.h"

static int	lennun(ssize_t n)
{
	int		count;

	count = 0;
	while ((n / 16) != 0)
	{
		n = n / 16;
		count++;
	}
	return (count + 1);
}

static char	*training(ssize_t n, int count, char *num)
{
	while (count >= 0 && num[count] != '-')
	{
		if ((n % 16) < 10)
			num[count] = (n % 16) + '0';
		else
			num[count] = 'a' + ((n % 16) - 10);
		n = n / 16;
		count--;
	}
	return (num);
}

char	*ft_up_hetoa(ssize_t n)
{
	char	*num;
	ssize_t	nlon;
	int		count;

	nlon = (ssize_t)n;
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
