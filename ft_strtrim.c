/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:21:29 by angrios           #+#    #+#             */
/*   Updated: 2025/05/11 19:13:15 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_starting_char(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_char_in_set(s1[i], set))
		i++;
	return (i);
}

static int	ft_ending_char(const char *s1, const char *set, int len)
{
	int	i;

	i = len - 1;
	while (i >= 0 && ft_char_in_set(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = ft_starting_char(s1, set);
	end = ft_ending_char(s1, set, ft_strlen(s1));
	trimmed = malloc((end - start + 2) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 2);
	return (trimmed);
}
