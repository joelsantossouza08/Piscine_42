/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:06:59 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/02 12:03:29 by joesanto         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (!s1 || !s2 || !n)
		return (0);
	while (n-- > 1 && *s1 == *s2)
	{
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len;

	if (!str || !to_find)
		return (0);
	len = ft_strlen(to_find);
	while (*str)
	{
		if (ft_strncmp(str, to_find, len) == 0)
			return (str);
		str++;
	}
	return (0);
}
//#include <stdio.h>
//#include <string.h>
//
//int	main(int argc, char **argv)
//{
//	if (argc != 3)
//		return (1);
//	printf("%s\n", ft_strstr(argv[1], argv[2]));
//	printf("%s\n", strstr(argv[1], argv[2]));
//	return (0);
//}
//THE "" "" OPTION SHOULD FIND "" NOT (null)
//PUT A VERIFICATION IN THE BEGINNING OF FUNCTION
