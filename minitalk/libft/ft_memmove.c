/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shopa <samethopa@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:40:44 by shopa             #+#    #+#             */
/*   Updated: 2022/02/06 11:49:42 by shopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		dp = dst + len;
		sp = src + len;
		while (len-- > 0)
		{
			*--dp = *--sp;
		}
	}
	else
	{
		dp = dst;
		sp = src;
		while (len-- > 0)
		{
			*dp++ = *sp++;
		}
	}
	return (dst);
}
