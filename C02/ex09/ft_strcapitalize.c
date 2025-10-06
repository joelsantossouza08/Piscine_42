/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:44:18 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/09 12:07:19 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_alphanum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	if (!str)
		return (0);
	ptr = str;
	while (*ptr)
	{
		while (*ptr && !is_alphanum(*ptr))
			ptr++;
		if (is_lower(*ptr))
			*ptr -= 'a' - 'A';
		while (is_alphanum(*ptr))
			ptr++;
	}
	return (str);
}

//int	main(int argc, char **argv)
//{
//#include <stdio.h>
//	if (argc != 2)
//		return (1);
//	printf("%s\n", ft_strcapitalize(argv[1]));
//	return (0);
//}
