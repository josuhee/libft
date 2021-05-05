/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujo <sujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:30:20 by sujo              #+#    #+#             */
/*   Updated: 2021/05/05 16:15:22 by sujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		s1_len;
	size_t		ret_len;
	char		*result;
	char const	*ptr;

	s1_len = ft_strlen(s1);
	ptr = s1;
	while (ft_strchr(set, *s1) != NULL)
		s1++;
	if (s1 == ptr + s1_len + 1)
		return (ft_strdup(""));
	ptr += (s1_len - 1);
	while (ft_strchr(set, *ptr) != NULL)
		ptr--;
	ret_len = ptr - s1 + 1;
	result = (char *)malloc(ret_len + 1);
	if (!result)
		return (0);
	result = ft_memmove(result, s1, ret_len);
	result[ret_len + 1] = '\0';
	return (result);
}
