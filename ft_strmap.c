/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:36:20 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/12 12:29:03 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{	
	char	*blank;
	size_t	i;

	if (!s || !f)
		return (NULL);
	if (!(blank = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		blank[i] = (*f)(s[i]);
		i++;
	}
	blank[i] = '\0';
	return (blank);
}
