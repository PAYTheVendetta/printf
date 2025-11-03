/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:36:58 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/21 17:35:50 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	strar;
	size_t	end;
	char	*cut;

	strar = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[strar] && ft_strchr(set, s1[strar]))
		strar++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (strar >= end)
	{
		strar = 0;
		end = 0;
	}
	end = end - strar;
	cut = ft_substr(s1, strar, end);
	return (cut);
}
/* 
int	main(int argc, char const *argv[])
{
	char s1[] = "lorem ipsum dolor sit amet";
	printf("resultado %s\n", ft_strtrim(s1, "te"));
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	int	n;

	n = 0;
	while (s[n])
	{
		if (s[n] == (unsigned char)c)
			return (&s[n]);
		n++;
	}
	if ((unsigned char)c == '\0')
		return (&s[n]);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;

	copy = NULL;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= (size_t)start)
	{
		start = 0;
		len = 0;
	}
	if (len > ft_strlen(&s[(size_t)start]))
		len = ft_strlen(&s[(size_t)start]);
	len++;
	copy = malloc(len * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, &s[(size_t)start], len);
	return (copy);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (src[n])
	{
		if (dstsize != 0)
		{
			if (n < dstsize - 1)
			{
				dst[n] = src[n];
				i++;
			}
		}
		n++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (n);
}
 */