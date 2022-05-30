/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shopa <samethopa@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:52:45 by shopa             #+#    #+#             */
/*   Updated: 2022/02/06 11:51:48 by shopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	llen;

	if (*needle == '\0')
		return ((char *)haystack);
	llen = ft_strlen(needle);
	while (*haystack && len-- >= llen)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, llen) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
