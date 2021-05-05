/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujo <sujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:11:15 by sujo              #+#    #+#             */
/*   Updated: 2021/05/05 14:34:39 by sujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				idx;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	idx = 0;
	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (dst <= src)
	{
		while (len--)
			*ptr1++ = *ptr2++;
	}
	else
	{
		ptr1 += len;
		ptr2 += len;
		while (len--)
			*--ptr1 = *--ptr2;
	}
	return (dst);
}
