/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakata <atakata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:04:41 by atakata           #+#    #+#             */
/*   Updated: 2026/06/11 10:43:10 by atakata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	new_c;

	i = 0;
	new_c = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == new_c)
			return ((char *)&s[i]);
		i++;
	}
	if (new_c == '\0')
		return ((char *)&s[i]);
	return (0);
}
