/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:37:55 by zentifi           #+#    #+#             */
/*   Updated: 2023/09/21 04:46:42 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	tn;
	int	first;
	int	last;

	first = 0;
	last = size / 2;
	while (first < last)
	{
		tn = tab[first];
		tab[first] = tab[size - 1 - first];
		tab[size - 1 - first] = tn;
		first++;
	}
}
/*int main()
{
	int frt = 0;
	int tab[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(tab,6);
	while(frt <6 )
	{
		printf("%d",tab[frt]);
		frt++;
	}
	return 0;
}*/
