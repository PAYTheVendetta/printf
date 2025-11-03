/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:48:27 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/21 17:37:15 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	n;
	int	i;

	n = 0;
	i = -1;
	while (s[n])
	{
		if (s[n] == (unsigned char)c)
			i = n;
		n++;
	}
	if (!(s[n]) && i >= 0)
		return (&((char *)s)[i]);
	if ((unsigned char)c == '\0')
	{
		i = n;
		return (&((char *)s)[i]);
	}
	return (0);
}
