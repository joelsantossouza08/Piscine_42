/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:04:02 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/02 18:05:57 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_fputstr(int fd, char *str)
{
	if (fd < 0 || !str)
		return ;
	while (*str)
		write(fd, str++, 1);
}
