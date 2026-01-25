/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 16:49:34 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/25 22:34:26 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	//copies n bytes from src to dest
	//memory areas may overlap
	//src -> tmp -> dest
	//returns ptr to dest

	unsigned char	buffer[n];

	if (n == 0)
		return (0);	
	ft_memcpy(buffer, (const char*)src, n);
	ft_memcpy((unsigned char *)dest, buffer, n);

	return (dest);
}

// NOTA: hacerlo con asignacion byte a byte entre src y dest, dependiendo del
// que sea más largo 

#include <string.h>

int	main()
{
	const void *src = "rojo";
	void *dest = "azul";
	const void *src2 = "rojo";
	void *dest2 = "azul";

	printf("ft_memmove: %p", ft_memmove(dest, src, 4));
	printf("memmove: %p", memmove(dest2, src2, 4));
}
