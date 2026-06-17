/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakata <atakata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:03:26 by atakata           #+#    #+#             */
/*   Updated: 2026/06/01 17:19:19 by atakata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)&big[j]);
	while (big[j] && j < len)
	{
		while (big[j + i] == little[i] && little[i] && (i + j < len))
			i++;
		if (little[i] == '\0')
			return ((char *)&big[j]);
		i = 0;
		j++;
	}
	return (NULL);
}
