/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:37:47 by evportel          #+#    #+#             */
/*   Updated: 2023/03/14 14:27:20 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	char w;

	w = 'a';
	ft_putchar('a');
	ft_putchar(' ');
	ft_putchar(w);
	ft_putchar(' ');
	ft_putchar(122);
	ft_putchar(' ');
}	
*/
