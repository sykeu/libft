/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:37:14 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/12/07 01:33:26 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*f;
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (0);
	p = (char *)src;
	f = (char *)dst;
	while (i < n)
	{
		f[i] = p[i];
		i++;
	}
	return (f);
}
