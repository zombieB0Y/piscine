/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:21:40 by zentifi           #+#    #+#             */
/*   Updated: 2023/09/24 05:10:29 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/
#include<string.h>

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int main()
{
    printf("%d", ft_str_is_printable("265ibh"));
}*/
