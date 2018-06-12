/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:44:35 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/12 10:33:03 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*newstr;
	size_t			len;
	unsigned int	start;

	start = 0;
	while (s[start] && (s[start] == ' '
				|| s[start] == '\t' || s[start] == '\n'))
		start++;
	if (s[start] == '\0')
		return (ft_strdup(s + start));
	len = ft_strlen(s) - 1;
	while (s[len] && (s[len] == ' ' || s[len] == '\t' || s[len] == '\n'))
		len--;
	if (!(newstr = ft_strnew(len)))
		return (NULL);
	newstr = ft_strsub(s, start, len - start + 1);
	return (newstr);
}
