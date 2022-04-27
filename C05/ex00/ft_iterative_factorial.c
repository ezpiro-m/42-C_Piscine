/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:18:32 by coder             #+#    #+#             */
/*   Updated: 2021/11/29 18:25:24 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ep;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	i = 0;
	ep = 1;
	while (++i <= nb)
		ep *= i;
	return (ep);
}
