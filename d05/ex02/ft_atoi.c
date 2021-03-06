/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:03:31 by asfaihi           #+#    #+#             */
/*   Updated: 2019/09/05 15:04:28 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 1;
	while (((*str <= 13) && (*str >= 9)) || (*str == 32))
		str++;
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			c = -1;
		b++;
		str++;
	}
	if (b > 1)
		return (0);
	while ((*str <= '9') && (*str >= '0'))
	{
		a = (*str - 48) + a * 10;
		str++;
	}
	return (a * c);
}
