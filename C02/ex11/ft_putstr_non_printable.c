/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:12:58 by coder             #+#    #+#             */
/*   Updated: 2021/11/24 17:25:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	is_not_printable(char c)
{
	if (c < 32 || c > 126)
		return (1);
	return (0);
}

void	dec_to_hex(unsigned char n)
{
	char	*base;

	base = "0123456789abcdef";
	putchar(base[n / 16]);
	putchar(base[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (is_not_printable(*str))
		{
			putchar('\\');
			dec_to_hex(*str);
		}
		else
			putchar(*str);
		++str;
	}
}
