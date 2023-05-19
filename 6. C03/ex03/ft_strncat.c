/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:28:36 by evportel          #+#    #+#             */
/*   Updated: 2023/03/22 14:57:34 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_d;
	unsigned int	index_s;

	index_d = 0;
	index_s = 0;
	while (dest[index_d] != '\0')
	{
		index_d++;
	}
	while (index_s < nb && src[index_s] != '\0')
	{
		dest[index_d] = src[index_s];
		index_s++;
		index_d++;
	}
	dest[index_d] = '\0';
	return (dest);
}
