/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:42:26 by joesanto          #+#    #+#             */
/*   Updated: 2025/10/08 15:38:13 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count_if;

	count_if = 0;
	while (length--)
		if (f(*tab++))
			count_if++;
	return (count_if);
}

//#include <ctype.h>
//int	ft_str_is_alpha(char *str)
//{
//	while (*str)
//		if (!isalpha(*str++))
//			return (0);
//	return (1);
//}
//int	main(int argc, char **argv)
//{
//#include <stdio.h>
//	printf("%d\n", ft_count_if(argv, argc, ft_str_is_alpha));
//	return (0);
//}
