/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:07:19 by tphillan          #+#    #+#             */
/*   Updated: 2019/08/13 19:07:39 by tphillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	len = ft_strlen(s);
	i = 0;
	while (len >= i)
	{
		if (c == s[len])
			return ((char *)s + len);
		if ( c == 0)
			return (NULL);
		len--;
	}
	return (NULL);
}
