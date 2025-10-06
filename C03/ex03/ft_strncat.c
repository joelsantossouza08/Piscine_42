/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:54:56 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/28 19:07:58 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	if (!dest || !src)
		return (0);
	ptr = dest + ft_strlen(dest);
	while (nb-- && *src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}
//#include <stdio.h>
//#include <stdlib.h>
//
//int	main(int argc, char **argv)
//{
//	char	buf[10] = "joel";
//
//	if (argc != 3)
//		return (1);
//	printf("%s\n", ft_strncat(buf, argv[1], atoi(argv[2])));
//	return (0);
//}
