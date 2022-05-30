/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shopa <samethopa@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:30:24 by shopa             #+#    #+#             */
/*   Updated: 2022/02/06 11:49:21 by shopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	if (!dst && !src)
		return (0);
	dp = dst;
	sp = src;
	while (n-- > 0)
	{
		*dp++ = *sp++;
	}
	return (dst);
}
