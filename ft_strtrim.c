/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:04:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:39:38 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	check_set_end(const char *buff, char const *set)
{
	size_t	len;

	len = (ft_strlen(buff) - 1);
	while (buff[len])
	{
		if (!(check_set(buff[len], set)))
			break ;
		len--;
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*buff;
	size_t		len;
	size_t		start;

	if (!s1)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	if (!(buff = malloc(sizeof(buff) * (len + 1))))
		return (NULL);
	ft_bzero(buff, len + 1);
	while (s1[start])
	{
		if (!(check_set(s1[start], set)))
			break ;
		start++;
	}
	if (!(buff = ft_substr(s1, start, len)))
		return (NULL);
	len = check_set_end(buff, set);
	if (!(buff = ft_substr(buff, 0, len + 1)))
		return (NULL);
	return (buff);
}
