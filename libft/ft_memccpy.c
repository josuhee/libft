/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujo <sujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:15:11 by sujo              #+#    #+#             */
/*   Updated: 2021/05/03 21:53:31 by sujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			idx;

	ptr1 = (unsigned char *)d;
	ptr2 = (unsigned char *)s;
	if (!*ptr1 && !*ptr2)
		return (0);
	idx = 0;
	while (idx < n)
	{
		*ptr1 = *ptr2;
		if (*ptr1 == c)
			return (ptr1 + 1);
		ptr1++;
		ptr2++;
		idx++;
	}
	return (0);
}
