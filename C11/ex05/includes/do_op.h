/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:19:44 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/06 21:27:34 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# define STDOUT		1
# define STDERR		2
# define SUCCESS	0
# define ERROR		-1
# define MAX_OPS	5

typedef int	(*t_func_op)(int, int, int*);

typedef struct s_op
{
	char		*sign;
	t_func_op	func;
}	t_op;

void	init_ops(t_op op[MAX_OPS]);
int		sum(int n1, int n2, int *result);
int		sub(int n1, int n2, int *result);
int		div(int n1, int n2, int *result);
int		mlt(int n1, int n2, int *result);
int		mod(int n1, int n2, int *result);
int		ft_strcmp(char *s1, char *s2);
void	ft_fputstr(int fd, char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

#endif
