/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezpiro-m < ezpiro-m@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:48:39 by ezpiro-m          #+#    #+#             */
/*   Updated: 2021/12/02 13:50:19 by ezpiro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	p = (char *)malloc((len(src) + 1) * sizeof(char));
	if (p == 0)
		return (0);
	i = 0;
	while (src[i] != 0)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
