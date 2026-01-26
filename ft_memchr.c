/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 08:19:37 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/25 08:42:02 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
			return (temp + i);
		i++;
	}
	return (0);
}
/*
int main()
{
	char buf[5] = {'a', '\0', 'b', 'c', 'd'};
	
	printf("%c\n", *(char *)ft_memchr(buf, 'b', 5)); // prints 'b'
	printf("%p\n", ft_memchr(buf, 'x', 5));          // prints NULL

}
*/
