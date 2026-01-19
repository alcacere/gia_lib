/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:08:51 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/19 00:56:44 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	if (c == '\0')
		return (tmp + ft_strlen(tmp));
	while (*tmp)
	{
		if (*tmp == (char)c)
			return (tmp);
		tmp++;
	}
	return (NULL);
}

int main()
{
	const char *test = "la vaca lo\0la jeje";

	printf("%s\n", ft_strchr(test, '\0'));
}
