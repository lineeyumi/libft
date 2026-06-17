/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakata <atakata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:03:50 by atakata           #+#    #+#             */
/*   Updated: 2026/06/01 16:35:09 by atakata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*q;

	p = (unsigned char *)dest;
	q = (const unsigned char *)src;
	if (n == 0)
		return (dest);
	while (n > 0)
	{
		*p = *q;
		p++;
		q++;
		n--;
	}
	return (dest);
}
