/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujo <sujo@student.42soul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:15:52 by sujo              #+#    #+#             */
/*   Updated: 2021/05/05 20:29:26 by sujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_size(char const *s, char c)
{
	size_t	size;
	int		flag;

	size = 0;
	flag = 1;
	while (*s)
	{
		if (flag && *s != c)
		{
			size++;
			flag = 0;
		}
		if (*s == c)
			flag = 1;
		s++;
	}
	return (size);
}

void	ft_strcpy_1(char *dest, char const *from, char const *to)
{
	while (from < to)
	{
		*dest = *from;
		dest++;
		from++;
	}
	*dest = '\0';
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	char const	*ptr;
	int			size;
	int			idx;

	size = str_size(s, c);
	result = (char **)malloc(sizeof(char *) * (size + 1));
	idx = 0;
	while (*s)
	{
		if (*s != c)
		{
			ptr = s;
			while (*s && *s != c)
				s++;
			result[idx] = (char *)malloc(s - ptr + 1);
			ft_strcpy_1(result[idx], ptr, s);
			idx++;
		}
		if (!*s)
			break ;
		s++;
	}
	result[size] = 0;
	return (result);
}
