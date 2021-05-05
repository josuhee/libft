/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujo <sujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:59:41 by sujo              #+#    #+#             */
/*   Updated: 2021/05/03 18:56:03 by sujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			idx;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (*ptr1 == '\0' && *ptr2 == '\0')
		return (dst);
	idx = 0;
	while (idx < n)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		idx++;
	}
	return (dst);
}
