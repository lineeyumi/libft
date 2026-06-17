/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakata <atakata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:03:41 by atakata           #+#    #+#             */
/*   Updated: 2026/06/06 13:39:33 by atakata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*n;
	size_t		i;

	i = 0;
	n = ft_calloc(ft_strlen(s) + 1, 1);
	if (n == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		n[i] = s[i];
		i++;
	}
	return (n);
}
