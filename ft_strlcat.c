/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:44:41 by angrios           #+#    #+#             */
/*   Updated: 2025/04/30 13:28:58 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	int		rtn;

	dst_len = 0;
	src_len = 0;
	rtn = ft_strlen(dst) + ft_strlen(src);
	while (dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0' && dst_len < size)
	{
		dst[dst_len] = src[src_len];
		src_len++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (rtn);
}

#include <stdio.h>

int main(void)
{
    char buffer[20] = "Hola";
    size_t ret = ft_strlcat(buffer, " Mundo", 20);

    printf("Buffer final: \"%s\"\n", buffer);
    printf("Valor retornado: %zu\n", ret);

    return 0;
}