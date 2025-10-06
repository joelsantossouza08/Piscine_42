/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:04:06 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/30 17:22:43 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
//#include <stdio.h>
//#include <stdlib.h>
//int	main(int argc, char **argv)
//{
//	if (argc != 2)
//		return (1);
//	printf("%d\n", ft_fibonacci(atoi(argv[1])));
//	return (0);
//}
