/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 20:16:56 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/05 12:08:19 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char chr)
{
	return (chr == ' ' || (chr >= '\t' && chr <= '\r'));
}

int	is_sign(char chr)
{
	return (chr == '+' || chr == '-');
}

int	is_digit(char chr)
{
	return (chr >= '0' && chr <= '9');
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;

	if (!str)
		return (0);
	while (is_space(*str))
		str++;
	sign = 1;
	while (is_sign(*str))
		if (*str++ == '-')
			sign = -sign;
	nbr = 0;
	while (is_digit(*str))
		nbr = nbr * 10 + (*str++ - '0');
	return (nbr * sign);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_atoi("-0"));
//	return (0);
//}
