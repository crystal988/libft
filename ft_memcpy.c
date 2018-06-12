/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:21:54 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/08 14:03:12 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void		*ft_memcpy(void *destination, const void *source, size_t n)
{
	char	*dst;
	char	*src;
	int		i;

	dst = (char*)destination;
	src = (char*)source;
	i = -1;
	while (i++ < (int)n)
		dst[i] = src[i];
	return (destination);
}
