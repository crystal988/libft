/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:50:55 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/12 15:50:40 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int nbr;
	int ngv;

	i = 0;
	nbr = 0;
	ngv = 1;
	if ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-')
	{
		ngv = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
		nbr = (nbr * 10) + (*str++ - '0');
	return ((ngv) * (nbr));
}
