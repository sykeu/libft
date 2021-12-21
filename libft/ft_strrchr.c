/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 07:50:14 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/12/07 01:34:46 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	d;

	d = (char)c;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == d)
			return ((char *)(s + l));
		l--;
	}
	return (NULL);
}
