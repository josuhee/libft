/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujo <sujo@student.42soul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:07:18 by sujo              #+#    #+#             */
/*   Updated: 2021/05/04 14:11:54 by sujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t idx;

	idx = 0;
	while (*str++)
		idx++;
	return (idx);
}

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	idx;

	idx = 0;
	result = (char *)malloc(ft_strlen(s) + 1);
	while (s[idx] != '\0')
	{
		result[idx] = s[idx];
		idx++;
	}
	result[idx] = '\0';
	return (result);
}
