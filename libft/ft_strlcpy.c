/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujo <sujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 21:59:03 by sujo              #+#    #+#             */
/*   Updated: 2021/05/03 21:24:44 by sujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t idx;

	idx = 0;
	if (size != 0)
	{
		while (idx < size - 1 && *src)
		{
			*dest = *src;
			dest++;
			src++;
			idx++;
		}
		*dest = '\0';
	}
	while (*src++)
		idx++;
	return (idx);
}
