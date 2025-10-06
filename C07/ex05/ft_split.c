/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 06:40:36 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/02 07:49:32 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char chr, char *charset)
{
	while (*charset)
		if (*charset++ == chr)
			return (1);
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	nwords;

	nwords = 0;
	while (*str)
	{
		while (is_charset(*str, charset))
			str++;
		if (*str)
			nwords++;
		while (*str && !is_charset(*str, charset))
			str++;
	}
	return (nwords);
}

char	*ft_strndup(char *str, unsigned int n)
{
	char	*new;
	char	*new_ptr;

	new = malloc(n + 1);
	if (!new)
		return (0);
	new_ptr = new;
	while (n--)
		*new_ptr++ = *str++;
	*new_ptr = 0;
	return (new);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	char	**split_ptr;
	char	*str_start;

	if (!str || !charset)
		return (0);
	split = malloc((word_count(str, charset) + 1) * sizeof(char *));
	if (!split)
		return (0);
	split_ptr = split;
	while (*str)
	{
		while (is_charset(*str, charset))
			str++;
		str_start = str;
		while (*str && !is_charset(*str, charset))
			str++;
		if (str - str_start <= 0)
			continue ;
		*split_ptr = ft_strndup(str_start, str - str_start);
		if (!*split_ptr++)
			return (split);
	}
	*split_ptr = 0;
	return (split);
}
//#include<stdio.h>
//int	main(int argc, char **argv)
//{
//	char	**strs;
//	char	**ptr;
//
//	if (argc != 2)
//		return (1);
//	strs = ft_split(argv[1], "");
//	ptr = strs;
//	while (*ptr)
//		printf(":%s:\n", *ptr++);
//	ptr = strs;
//	while (*ptr)
//		free(*ptr++);
//	free(strs);
//	return (0);
//}
