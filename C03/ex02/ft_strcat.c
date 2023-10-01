/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 00:31:28 by zentifi           #+#    #+#             */
/*   Updated: 2023/09/27 02:38:50 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	z;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[i] = src[z];
		i++;
		z++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char	 dest[] = "1337";
	char	src[] = "zoubair";
	printf("%s", ft_strcat(dest,src));
}*/
