/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:28:18 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/11 14:28:21 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	c;
	int		i;
	int		space;

	i = 0;
	while (str[i] != '\0')
	{
		space = 1;
		if (i == 0)
			c = ';';
		else
			c = str[i - 1];
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			space = 0;
		if (c >= 48 && c <= 57)
			space = 0;
		if (space == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		if (space == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
