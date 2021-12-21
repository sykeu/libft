/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:37:33 by hbenzzin          #+#    #+#             */
/*   Updated: 2021/12/07 01:33:50 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const char *src, size_t len)
{
	char	*d;
	int		dlen;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	dlen = len - 1;
	if (src < d)
	{
		while (dlen >= 0)
		{
			d[dlen] = src[dlen];
			dlen--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
