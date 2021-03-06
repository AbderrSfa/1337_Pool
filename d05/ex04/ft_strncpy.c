/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:54:00 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/10 14:55:30 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while ((src[a] != '\0') && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while ((dest[a] != '\0') && a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
