/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:16:25 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/17 13:26:52 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}


/*[TEST]
int main()
{
	int		a;

	for (a = 0; a < 130; a++)
		printf("a: %d [ft: %d, or: %d]\n", a, ft_isprint(a), isprint(a));
	return (0);
}*/