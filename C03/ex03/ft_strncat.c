/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:34:42 by coder             #+#    #+#             */
/*   Updated: 2021/11/25 17:38:09 by coder            ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	i;

	ptr = dest + str_len(dest);
	i = -1;
	while (*src != '\0' && ++i < nb)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
