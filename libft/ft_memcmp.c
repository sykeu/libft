/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:29:39 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/11/13 11:18:30 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	if (n == 0)
		return (0);
	i = 0;
	s = (char *)s1;
	d = (char *)s2;
	while (i < n - 1 && s[i] == d[i])
		i++;
	return ((unsigned char)s[i] - (unsigned char)d[i]);
}
