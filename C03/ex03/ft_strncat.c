/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 01:01:23 by zentifi           #+#    #+#             */
/*   Updated: 2023/09/27 02:40:22 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned	int nb)
{
	unsigned int	i;
	unsigned int	z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[z] != '\0' && z < nb)
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
	char src[] = "zoubair";
	char dest[] = "1337";
	printf("%s", ft_strncat(dest,src,6));
}*/
