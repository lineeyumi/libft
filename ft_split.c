/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakata <atakata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:05:11 by atakata           #+#    #+#             */
/*   Updated: 2026/06/10 19:11:03 by atakata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_word(char const *s, char c)
{
	unsigned int	verification;
	unsigned int	count;

	verification = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && verification == 0)
		{
			verification = 1;
			count++;
		}
		else if (*s == c)
			verification = 0;
		s++;
	}
	return (count);
}

static char	**ft_memory(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static char	*ft_final_string(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (ft_substr(s, 0, i));
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result = ft_calloc(ft_count_word(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			result[j] = ft_final_string(&s[i], c);
			if (!result[j++])
				return (ft_memory(result));
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (result);
}
