/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujo <sujo@student.42soul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:15:52 by sujo              #+#    #+#             */
/*   Updated: 2021/05/06 23:19:53 by sujo             ###   ########.fr       */
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

#include <stdio.h>

char	*get_str(char const *s, char c)
{
	char		*str;
	size_t		idx;
	size_t		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	idx = 0;
	while (idx < len)
		str[idx] = (char)s[idx];
	str[len] = '\0';
	return (str);
}

char	**go_free(char **str)
{
	size_t idx;

	idx = 0;
	while (str[idx])
		free(str[idx]);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			idx;

	if (!s)
		return (0);
	result = (char **)malloc(sizeof(char *) * (str_size(s, c) + 1));
	if (!result)
		return (0);
	idx = 0;
	while (*s)
	{
		if (*s != c)
		{
			printf("1");
			result[idx] = get_str(s, c);
			if (!result[idx])
				return (go_free(result));
			printf("%s\n", result[idx]);
			idx++;
		}
		if (!*s)
			break ;
		s++;
	}
	result[idx] = 0;
	return (result);
}

int main(){
	char *s = "      split       this for   me  !       ";

	char **result = ft_split(s, ' ');

	for (int i=0;i<5;i++)
		printf("%s\n", result[i]);
	printf("%s\n", result[5]);
	return 0;
}
