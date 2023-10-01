/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:31:40 by zentifi           #+#    #+#             */
/*   Updated: 2023/09/21 04:48:13 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	first;
	int	last;

	first = 0;
	while (first < size - 1)
	{
		last = first + 1;
		while (last < size)
		{
			if (tab[first] > tab[last])
			{
				tmp = tab[first];
				tab[first] = tab[last];
				tab[last] = tmp;
			}
			last++;
		}
		first++;
	}
}
/*int main()
{
	int ft = 0;
	int ta[6] = {5, 20, 1, 4, 8, 12};
	ft_sort_int_tab(ta,6);
	while (ft < 6)
	{
		printf("%d",ta[ft]);
		ft++;
	}
}*/
