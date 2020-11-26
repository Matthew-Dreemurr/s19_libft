/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:58:46 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/26 15:30:11 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	compt;
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i])
		i++;
	compt = 0;
	while (src[compt])
	{
		compt++;
	}
	if (dstsize <= compt)
		compt += dstsize;
	else
		compt += i;
	j = 0;
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = 0;
	return (compt);
}