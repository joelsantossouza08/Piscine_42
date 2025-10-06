/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:42:43 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/06 21:34:44 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	t_op	ops[MAX_OPS];
	int		i;
	int		n;

	if (argc != 4)
		return (1);
	init_ops(ops);
	i = -1;
	while (++i < MAX_OPS)
	{
		if (ft_strcmp(ops[i].sign, argv[2]) == 0)
		{
			if (ops[i].func(ft_atoi(argv[1]), ft_atoi(argv[3]), &n) == ERROR)
				return (1);
			ft_putnbr(n);
			ft_fputstr(STDOUT, "\n");
			return (0);
		}
	}
	ft_fputstr(STDOUT, "0\n");
	return (2);
}
