/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:46:04 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/16 16:45:14 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define STDIN		0
# define ERROR		-1
# define BUF_SIZE	4096

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_bsq
{
	t_point	left_hit;
	t_point	right_hit;
	t_point	start;
	int		area;
}	t_bsq;

typedef struct s_map
{
	char	empty;
	char	obstacle;
	char	full;
	int		width;
	int		height;
	char	**data;
}	t_map;

#endif
