/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 08:10:21 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/11 07:51:23 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_display_file(char *program_name, char *file_path)
{
	int		file;
	int		bytes_read;
	char	buf[BUF_SIZE];

	if (ft_strcmp(file_path, "-") == 0)
		file = STDIN;
	else
	{
		file = open(file_path, O_RDONLY);
		if (file < 0)
			return (ft_cat_error_msg(program_name, file_path));
	}
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(file, buf, BUF_SIZE);
		if (bytes_read < 0)
			break ;
		if (write(STDOUT, buf, bytes_read) < 0)
			break ;
	}
	if (file > STDERR)
		close(file);
}
