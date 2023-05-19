/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:54:38 by evportel          #+#    #+#             */
/*   Updated: 2023/03/14 14:30:47 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;	

	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}	
*/