/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakata <atakata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:04:00 by atakata           #+#    #+#             */
/*   Updated: 2026/06/01 16:35:11 by atakata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*q;

	p = (unsigned char *)dest;
	q = (const unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			p[n] = q[n];
		}
	}
	else
	{
		while (n > 0)
		{
			*p++ = *q++;
			n--;
		}
	}
	return (dest);
}
