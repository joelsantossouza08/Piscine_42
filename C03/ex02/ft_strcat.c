/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:44:20 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/28 18:53:46 by joesanto         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	if (!dest || !src)
		return (0);
	ptr = dest + ft_strlen(dest);
	ft_strcpy(ptr, src);
	return (dest);
}
//#include <stdio.h>
//
//int	main(int argc, char **argv)
//{
//	char	buf[10] = "hey";
//
//	if (argc != 2)
//		return (1);
//	printf("%s\n", ft_strcat(buf, argv[1]));
//	return (0);
//}
