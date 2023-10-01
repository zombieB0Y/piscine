/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 06:29:09 by zentifi           #+#    #+#             */
/*   Updated: 2023/09/21 04:37:20 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a % *b;
	*a = *a / *b;
	*b = tmp;
}
/*int main()
{
	int a;
	int b;

	a = 10;
	b = 5;
	ft_ultimate_div_mod(&a,&b);
	printf("%d,%d", a,b);
}*/
