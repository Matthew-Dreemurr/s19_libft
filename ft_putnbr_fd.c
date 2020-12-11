/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:44:24 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/11 16:10:02 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char tmp;

	if (n == -2147483648) // Not workin !
		write(fd, "-2147483648", 12);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		tmp = 0;
		tmp = n % 10;
		tmp += '0';
		n /= 10;
		if (n > 0)
			ft_putnbr_fd(n, fd);
		write(fd, &tmp, 1);
	}
}
