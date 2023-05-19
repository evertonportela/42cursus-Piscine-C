/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:28:31 by evportel          #+#    #+#             */
/*   Updated: 2023/03/22 14:57:57 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*source;
	char	*find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		source = str;
		find = to_find;
		while (*source == *find || *find == '\0')
		{
			if (*find == '\0')
				return (str);
			source++;
			find++;
		}
		str++;
	}
	return (0);
}
