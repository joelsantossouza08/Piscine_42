/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:11:47 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/03 16:10:47 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define TRUE		1
#define FALSE		0
#define EVEN(nbr)	(!((nbr) & 1))
#define EVEN_MSG	"I have an even number of arguments.\n"
#define ODD_MSG		"I have an odd number of arguments.\n"
#define SUCCESS		0

typedef int	t_bool;
