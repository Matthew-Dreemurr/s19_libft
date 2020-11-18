/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:24:00 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/18 17:11:21 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	unsigned char	*cdest;
	unsigned char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	i = -1;
	while (++i < n)
		cdest[i] = csrc[i];
}

/*[TEST]
int main()
{
	
	int array [] = { 54, 85, 20, 63, 21 };
	int * copy = NULL;
	int length = sizeof( int ) * 5;
	
	copy = (int *) malloc( length );
	ft_memcpy( copy, array, length );
	
	for( length=0; length<5; length++ ) {
		printf( "%d ", copy[ length ] );
	}
	printf( "\n" );
	
	free( copy );
		
	return EXIT_SUCCESS;
}
*/