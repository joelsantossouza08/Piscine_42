/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:42:10 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/29 22:27:26 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power--)
		result *= nb;
	return (result);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_iterative_power(4, 5));
//	return (0);
//}
