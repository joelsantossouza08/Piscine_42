/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:39:49 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/06 11:53:23 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	if (!tab || !f)
		return (0);
	while (*tab)
		if (f(*tab++))
			return (1);
	return (0);
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
//	(void)argc;
//	printf("%d\n", ft_any(argv, ft_str_is_alpha));
//	return (0);
//}
