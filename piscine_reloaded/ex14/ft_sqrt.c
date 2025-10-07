/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:06:52 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/30 18:44:02 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	odd;
	int	sqrt;

	sqrt = 0;
	odd = 1;
	while (nb > 0 && ++sqrt)
	{
		nb -= odd;
		if (nb < 0)
			return (0);
		odd += 2;
	}
	return (sqrt);
}
//#include<stdio.h>
//#include<stdlib.h>
//int	main(int argc, char **argv)
//{
//	if (argc != 2)
//		return (1);
//	printf("%d\n", ft_sqrt(atoi(argv[1])));
//	return (0);
//}
