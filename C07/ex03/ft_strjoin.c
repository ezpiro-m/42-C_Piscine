/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezpiro-m < ezpiro-m@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:32:20 by ezpiro-m          #+#    #+#             */
/*   Updated: 2021/12/02 19:40:51 by ezpiro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*e;
	int		i;
	int		p;
	int		m;

	e = malloc(sizeof(strs));
	i = 0;
	m = 0;
	while (i < size)
	{
		p = 0;
		while (strs[i][p] != '\0')
		{
			e[m++] = strs[i][p++];
		}
		p = 0;
		while (sep[p] != '\0' && i != size - 1)
		{
			e[m++] = sep[p++];
		}
		i++;
	}
	e[m] = '\0';
	return (e);
}
