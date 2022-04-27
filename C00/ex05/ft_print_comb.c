/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:15:17 by coder             #+#    #+#             */
/*   Updated: 2021/11/20 10:26:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print3num(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 47;
	while (++a <= 57)
	{
		b = a;
		while (++b <= 57)
		{
			c = b;
			while (++c <= 57)
			{
				print3num(a, b, c);
				if (a != 55)
				{
					write(1, &",", 1);
					write(1, &" ", 1);
				}
			}
		}
	}
}
