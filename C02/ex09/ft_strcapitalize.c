/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zentifi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:29:26 by zentifi           #+#    #+#             */
/*   Updated: 2023/09/24 11:09:55 by zentifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include<unistd.h>

int	is_num_or_char(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	first_char;
	int	i;

	i = 0;
	first_char = 1;
	while (str[i])
	{
		if (is_num_or_char(str[i]))
		{
			if (first_char && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!first_char && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			first_char = 0;
		}
		else
			first_char = 1;
		i++ ;
	}
	return (str);
}
/*int    main()
{
    char str[] = "sAlut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}*/
