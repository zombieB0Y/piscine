/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 01:50:09 by zentifi           #+#    #+#             */
/*   Updated: 2023/10/01 12:52:09 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (to_find[z] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + z] == to_find[z] && str[i + z] != '\0')
		{
			z++;
		}
		if (to_find[z] == '\0')
		{
			return (str + i);
		}
		i++;
		z = 0;
	}
	return (0);
}
/*int main()
{
	printf("%s", ft_strstr("dog",""));
}*/
