/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:46:46 by evportel          #+#    #+#             */
/*   Updated: 2023/03/17 17:11:12 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	count;
	int	index;

	index = 0;
	count = size - 1;
	while (index < (size / 2))
	{
		aux = tab[index];
		tab[index] = tab[count];
		tab[count] = aux;
		index++;
		count--;
	}
}
