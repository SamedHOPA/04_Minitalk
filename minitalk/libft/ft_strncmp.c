/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shopa <samethopa@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:18:40 by shopa             #+#    #+#             */
/*   Updated: 2022/02/06 18:44:19 by shopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	a1;
	unsigned char	a2;

	while (n-- > 0)
	{
		a1 = *(unsigned char *)s1++;
		a2 = *(unsigned char *)s2++;
		if (a1 != a2)
			return (a1 - a2);
		if (a1 == '\0')
			return (0);
	}
	return (0);
}
