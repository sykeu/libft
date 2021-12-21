/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 01:54:13 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/11/29 01:54:16 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;
	int		l;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	p = (char *)malloc(sizeof(char) * (l + 1));
	if (!p)
		return (NULL);
	while (i < l)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = 0;
	return (p);
}
