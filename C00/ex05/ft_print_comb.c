/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 23:34:38 by zentifi           #+#    #+#             */
/*   Updated: 2023/09/18 04:32:48 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0' - 1;
	while (i < '7')
	{
		i++;
		j = i;
		while (j < '8')
		{
			j++;
			k = j;
			while (k < '9')
			{
				k++;
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != '7')
					write(1, ", ", 2);
			}
		}
	}
}
