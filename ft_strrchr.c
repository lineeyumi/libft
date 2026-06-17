/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakata <atakata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:04:58 by atakata           #+#    #+#             */
/*   Updated: 2026/06/11 10:45:58 by atakata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	new_c;

	i = ft_strlen(s);
	new_c = (char)c;
	while (i >= 0)
	{
		if (s[i] == new_c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
