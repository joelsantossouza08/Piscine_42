/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 10:47:25 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/31 11:07:28 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (min < max)
		array[i++] = min++;
	return (array);
}
//#include <stdio.h>
//int	main(void)
//{
//	int	*array;
//	int	min;
//	int	max;
//	int	i;
//
//	min = 11;
//	max = 10;
//	array = ft_range(min, max);
//	i = 0;
//	while (min++ < max)
//		printf("%d\n", array[i++]);
//	free(array);
//	return (0);
//}
