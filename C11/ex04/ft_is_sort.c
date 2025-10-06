/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 09:28:53 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/16 17:16:56 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	desc;
	int	asce;

	desc = 1;
	asce = 1;
	i = -1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asce = 0;
		else if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
	}
	return (asce || desc);
}

//int	cmp(int n1, int n2)
//{
//	return (n1 - n2);
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char **argv)
//{
//	int	tab[argc - 1];
//	int size;
//
//	size = 0;
//	while (*++argv)
//		tab[size++] = atoi(*argv);
//	if (argc > 1)
//		printf("%d\n", ft_is_sort(tab, size, cmp));
//}
