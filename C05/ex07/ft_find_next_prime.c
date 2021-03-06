/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:32:32 by coder             #+#    #+#             */
/*   Updated: 2021/11/30 13:35:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (nb < 2147483647)
	{
		i = 2;
		while (nb % i != 0)
		{
			if (i >= nb / 2)
				return (nb);
			i++;
		}
		nb++;
	}
	return (2147483647);
}
