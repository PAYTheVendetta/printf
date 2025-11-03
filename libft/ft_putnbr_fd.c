/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:06:19 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/12 20:30:15 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	let;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = n * -1;
		}
		let = (n % 10) + '0';
		if ((n / 10) != 0)
			ft_putnbr_fd((n / 10), fd);
		write(fd, &let, 1);
	}
}

/* int	main(void)
{
	ft_putnbr_fd(-2147483647, -1);
	return (0);
} */
