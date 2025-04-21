/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:05:40 by angrios           #+#    #+#             */
/*   Updated: 2025/04/21 13:34:09 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*p_str;

	i = 0;
	p_str = (unsigned char *)str;
	while (i < n)
	{
		p_str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
