/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 20:57:42 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/24 20:32:59 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size <= dest_len)
		return (ft_strlen(src) + size);
	while (dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len);
}
/*
#include <bsd/string.h>

int main()
{
	char	*src = "hola que tal";
	char	dest[15] = "12345678910";
	char	*src2 = "hola que tal";
	char	dest2[15] = "12345678910";

	size_t	ret = ft_strlcat(dest, src, 6);
	size_t	ret2 = strlcat(dest2, src2, 6);

	printf("%zu\n dest: %s\n", ret, dest);
	printf("%zu\n dest2: %s\n", ret2, dest2);
}*/
