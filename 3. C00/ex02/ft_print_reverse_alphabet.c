/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:47:54 by evportel          #+#    #+#             */
/*   Updated: 2023/03/14 14:32:02 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;	

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}	
*/