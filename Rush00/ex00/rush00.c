/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:31:49 by jmoreira          #+#    #+#             */
/*   Updated: 2023/03/05 12:46:00 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top_bottom(int column_begin, int column_end)
{
	if (column_begin == 0 || column_begin == column_end)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	middle(int column_begin, int column_end)
{
	if (column_begin == 0 || column_begin == column_end)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int column, int line)
{
	int	column_check;
	int	line_check;

	column_check = 0;
	line_check = 0;
	while (line_check < line && column > 0)
	{
		while (column_check < column)
		{
			if (line_check == 0)
				top_bottom(column_check, column - 1);
			else if (line_check == line - 1)
				top_bottom(column_check, column - 1);
			else
				middle(column_check, column - 1);
			column_check++;
		}
		ft_putchar ('\n');
		line_check++;
		column_check = 0;
	}
}
