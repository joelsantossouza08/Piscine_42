/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 10:27:48 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/31 10:46:24 by joesanto         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	if (!dest || !src)
		return (0);
	ptr = dest;
	while (*src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new;

	new = malloc(ft_strlen(src) + 1);
	if (!new)
		return (0);
	return (ft_strcpy(new, src));
}
//#include <stdio.h>
//int	main(int argc, char **argv)
//{
//	char	*str;
//
//	if (argc != 2)
//		return (1);
//	str = ft_strdup(argv[1]);
//	printf("%s\n", str);
//	free(str);
//	return (0);
//}
