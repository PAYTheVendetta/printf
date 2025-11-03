/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:00:14 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/21 17:35:41 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len) //
{
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[n] && len > n)
	{
		if (big[n + i] == little[i])
		{
			while (little[i] && len > (i + n))
			{
				if (big[n + i] != little[i])
					break ;
				i++;
			}
			if (!little[i])
				return ((char *)(big + n));
			i = 0;
		}
		n++;
	}
	return ((void *)0);
}

/* int	main(void)
{
	char	*s1 = "MZIRIBMZIRIBMZE123";
	char	*s2 = "MZIRIBMZE";
	size_t	max = ft_strlen(s2);

	printf("valor memset: %s\n", ft_strnstr(s1, s2, max));
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return (count);
} */