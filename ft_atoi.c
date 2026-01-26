/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 09:37:02 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/25 16:39:13 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\t')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
			result = result * 10 + (*nptr - '0');
		else
			return (sign * result);
		nptr++;
	}
	return (sign * result);
}
/*
#include <stdlib.h>
int main()
{
	printf("ft_ atoi: %d\n", ft_atoi("+12 345+++"));
	printf("atoi: %d\n", atoi("+12 345+++"));

}
*/
