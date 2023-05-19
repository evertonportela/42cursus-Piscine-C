/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:16:22 by evportel          #+#    #+#             */
/*   Updated: 2023/03/14 14:43:38 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		number = nb * -1;
	}
	else
	{
		number = nb;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar(number % 10 + '0');
}
/*
int	main(void)
{
	//ft_putnbr(1);
	//ft_putnbr(10);
	//ft_putnbr(-100);
	ft_putnbr(42);
	return (0);
}
*/