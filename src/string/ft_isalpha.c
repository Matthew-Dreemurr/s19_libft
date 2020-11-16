/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:19:12 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/16 22:49:16 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*[TEST]*/
int main()
{
	char	tab[] = {'#', ' ', '^', '4', 'g'};
	int		a;

	for (a = 0; a < 5; a++)
		printf("%d [ft: %d, or: %d]\n", (ft_isalpha((int)tab[a]) == isalpha((int)tab[a])), ft_isalpha((int)tab[a]), isalpha((int)tab[a]));
	
	return (0);
}