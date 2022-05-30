/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shopa <samethopa@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:35:31 by shopa             #+#    #+#             */
/*   Updated: 2022/02/21 17:35:36 by shopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;
	size_t	y;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	y = 0;
	if (start < slen)
		y = slen - start;
	if (y > len)
		y = len;
	result = (char *)malloc(y + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s + start, y + 1);
	return (result);
}
