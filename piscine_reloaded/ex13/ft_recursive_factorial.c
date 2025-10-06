/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:35:05 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/29 21:41:29 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
//#include <stdio.h>
//#include <stdlib.h>
//int	main(int argc, char **argv)
//{
//	if (argc != 2)
//		return (1);
//	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
//	return (0);
//}
