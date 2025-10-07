/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:07:45 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/03 09:14:17 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(char *file_name)
{
	int		file;
	int		bytes_read;
	char	buf[BUF_SIZE];	

	file = open(file_name, O_RDONLY);
	if (file < 0)
		return (ft_fputstr(STDERR, "Cannot read file.\n"));
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(file, buf, BUF_SIZE);
		write(STDOUT, buf, bytes_read);
	}
	close(file);
}
