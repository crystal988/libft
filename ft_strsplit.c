/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:02:11 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/12 12:30:38 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wcount(char const *str, char c)
{
	int i;
	int	wcount;

	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] == (char)c && str[i + 1] && str[1 + i] != c)
		{
			wcount++;
			ft_putchar(str[i]);
		}
		i++;
	}
	return (wcount);
}
