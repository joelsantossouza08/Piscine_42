/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:08:28 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/31 11:21:41 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
//#include<stdio.h>
//int	main(void)
//{
//	int	min;
//	int	max;
//	int	*range;
//	int	i;
//
//	min = 12;
//	max = 10;
//	printf("range: %d\n", ft_ultimate_range(&range, min, max));
//	i = 0;
//	while (min++ < max)
//		printf("%d\n", range[i++]);
//	free(range);
//	return (0);
//}
