/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigarcia <gigarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:26:08 by gigarcia          #+#    #+#             */
/*   Updated: 2026/01/19 01:12:39 by gigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	tmp += ft_strlen(tmp);
	if (c == '\0')
		return (tmp);
	while(tmp >= s)
	{
		if (*tmp == (char)c)
			return(tmp);
		tmp--;
	}
	return (NULL);
}

int main()
{
	char *str = "la vaca lola";

	printf("%s\n", ft_strrchr(str, '\0'));
}
