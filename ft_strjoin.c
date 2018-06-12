/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:41:27 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/08 13:53:21 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*newstr;
	size_t	newlen;

	newlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = ft_strnew(newlen);
	if (newstr == NULL)
	{
		return (NULL);
	}
	ft_strcpy(newstr, s1);
	ft_strcat(newstr, s2);
	return (newstr);
}
