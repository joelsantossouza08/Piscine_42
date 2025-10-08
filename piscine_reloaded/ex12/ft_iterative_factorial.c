/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:11:11 by joesanto          #+#    #+#             */
/*   Updated: 2025/10/08 15:57:45 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = nb;
	while (--i > 1)
		nb *= i;
	return (nb);
}
//#include <stdio.h>
//#include <stdlib.h>
//int	main(int argc, char **argv)
//{
//	if (argc != 2)
//		return (1);
//	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
//	return (0);
//}
