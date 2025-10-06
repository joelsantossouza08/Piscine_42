/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:32:41 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/06 21:48:28 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;

	if (!str)
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -sign;
	nbr = 0;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + (*str++ - '0');
	return (nbr * sign);
}

void	set_op(t_op *op, char *sign, t_func_op func)
{
	op->sign = sign;
	op->func = func;
}

void	init_ops(t_op op[MAX_OPS])
{
	set_op(&op[0], "+", sum);
	set_op(&op[1], "-", sub);
	set_op(&op[2], "/", div);
	set_op(&op[3], "*", mlt);
	set_op(&op[4], "%", mod);
}
