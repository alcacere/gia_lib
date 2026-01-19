/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:48:26 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/18 18:58:52 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return(i);
}
/*
int	main()
{
	const char *test = "12345678";

	printf("%zu\n", ft_strlen(test));
}
*/
