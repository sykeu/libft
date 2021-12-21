/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:45:12 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/12/09 02:13:25 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	l;
	size_t	l1;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	l = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = (char *)malloc(sizeof(char) * l);
	l1 = ft_strlen(s1);
	if (!p)
		return (NULL);
	while (i < l)
	{
		if (i < l1)
			p[i] = s1[i];
		else if (i >= l1)
			p[i] = s2[j++];
		i++;
	}
	return (p);
}
