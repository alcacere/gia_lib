/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_INCOMPLETE.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 08:52:01 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/25 22:49:43 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return (big);
	if (big == NULL && len == 0)
		return (NULL);
	
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] != '\0' 
				&& (i + j) < len)
		{
			if (big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return (&big[i]);


				

			j++;
		}
		i++;
	}

	return (0);	
}

//characters after a \0 in big are not searched.
//
//little empty = returns big
//little doesn´t occur in big = returns NULL
//little occurs in big = returns pointer to the first occurrence of little in big
//
