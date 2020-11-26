/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:28:44 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/26 16:48:27 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cpy_c;

	cpy_c = (char *)s;
	cpy_c += ft_strlen(s);
	while (cpy_c != s - 1)
	{
		if (*cpy_c == (char)c)
			return (cpy_c);
		cpy_c--;
	}
	return (c ? NULL : cpy_c);
}