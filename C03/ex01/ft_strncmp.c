/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:40:36 by zentifi           #+#    #+#             */
/*   Updated: 2023/09/28 02:29:58 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
#include<string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned	int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	printf("%d", ft_strncmp("zoubair","zoubair",8));
	printf("\n%d", strncmp("zoubair","zoubair",8));
}*/
