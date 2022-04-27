/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezpiro-m < ezpiro-m@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:53:13 by ezpiro-m          #+#    #+#             */
/*   Updated: 2021/12/02 14:08:01 by ezpiro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
