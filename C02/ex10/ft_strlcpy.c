/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:58:34 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/08 14:11:59 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (!dest || !src)
		return (0);
	i = 0;
	while (src[i] && size-- > 1)
		*dest++ = src[i++];
	*dest = 0;
	while (src[i])
		i++;
	return (i);
}

//int	main(void)
//{
//#include <stdio.h>
//	char	buf[10];
//	char	src[] = "joel";
//
//	printf("%d\n", ft_strlcpy(buf, src, 2));
//	printf("%s\n", buf);
//	return (0);
//}
