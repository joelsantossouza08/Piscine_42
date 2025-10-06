/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 13:33:25 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/02 16:15:53 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(char **str, unsigned int n)
{
	int	len;

	if (!str)
		return (0);
	len = 0;
	while (n--)
		len += ft_strlen(*str++);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	char	*join_ptr;
	char	*sep_ptr;

	if (!strs || !sep)
		return (0);
	if (size <= 0)
		return (malloc(0));
	join = malloc(ft_strslen(strs, size) + ft_strlen(sep) * size + 1);
	if (!join)
		return (0);
	join_ptr = join;
	while (size--)
	{
		if (*strs)
			while (**strs)
				*join_ptr++ = *(*strs)++;
		sep_ptr = sep;
		while (*sep_ptr)
			*join_ptr++ = *sep_ptr++;
		strs++;
	}
	*join_ptr = 0;
	return (join);
}
#include <stdio.h>
int	main(int argc, char **argv)
{	
	int		i;
	char	*strs[argc - 1];
	char	*join;

	i = 0;
	while (*++argv)
		strs[i++] = *argv;
	strs[0] = "hello";
	join = ft_strjoin(1, strs, ",");
	printf(":%s:\n", join);
	free(join);
	return (0);
}
