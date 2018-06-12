/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:46:11 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/12 10:37:21 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	x;

	x = 0;
	i = ft_strlen(dest + 1);
	i++;
	while (src[x] != '\0' && x < n)
		dest[i++] = src[x++];
	return (dest);
}
