/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:34:07 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/18 20:56:14 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main() {
    char src[] = "Hola Mundo";
    char dst[5];  // Búfer de destino pequeño para demostrar truncamiento

    size_t len = ft_strlcpy(dst, src, sizeof(dst));

    printf("Cadena copiada: %s\n", dst);
    printf("Longitud de la cadena fuente: %zu\n", len);
    printf("Tamaño del búfer: %zu\n", sizeof(dst));
    printf("return: %zu\n", len);

    if (len >= sizeof(dst)) {
        printf("La cadena fue truncada.\n");
    } else {
        printf("La cadena se copió completamente.\n");
    }

    return 0;
}*/
