/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:05:25 by coder             #+#    #+#             */
/*   Updated: 2021/11/25 17:37:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (*(s++) != '\0')
		++i;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest + str_len(dest);
	while (*src != '\0')
	{
			*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
