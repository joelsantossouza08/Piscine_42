/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:02:15 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/06 21:26:54 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	sum(int n1, int n2, int *result)
{
	if (result)
		*result = n1 + n2;
	return (SUCCESS);
}

int	sub(int n1, int n2, int *result)
{
	if (result)
		*result = n1 - n2;
	return (SUCCESS);
}

int	div(int n1, int n2, int *result)
{
	if (!n2)
	{
		ft_fputstr(STDERR, "Stop : division by zero\n");
		return (ERROR);
	}
	if (result)
		*result = n1 / n2;
	return (SUCCESS);
}

int	mlt(int n1, int n2, int *result)
{
	if (result)
		*result = n1 * n2;
	return (SUCCESS);
}

int	mod(int n1, int n2, int *result)
{
	if (!n2)
	{
		ft_fputstr(STDERR, "Stop : modulo by zero\n");
		return (ERROR);
	}
	if (result)
		*result = n1 % n2;
	return (SUCCESS);
}
