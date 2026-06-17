/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakata <atakata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:05:21 by atakata           #+#    #+#             */
/*   Updated: 2026/06/11 11:57:05 by atakata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*final;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_count(n);
	final = ft_calloc(i + 1, sizeof(char));
	if (n < 0)
	{
		final[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		final[0] = '0';
	while (n)
	{
		final[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (final);
}
