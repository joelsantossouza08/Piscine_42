/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_import_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:01:25 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/16 18:00:37 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// while read > 0 && not new line in the current position;
	// fill buff
	// static i will walk thought buffer until bytes_read or newline
	// then will strncat the new str;

int	get_line(int fd, char *line)
{
	static char	buf[BUF_SIZE];
	static int	i;
	int			bytes_read;
	int			len;

	bytes_read = 1;
	while (bytes_read)
	{
		bytes_read = read(fd, buf, BUF_SIZE);
		len = -1;
		while (bytes_read--)
			if (buf[++len] == '\n')
				break;
		line = ft_str_append(line, buf + i, len);
	}
}

int	import_map(t_map *map, char *file_path)
{
	char	buf[BUF_SIZE];

	if (!map)
		return (ERROR);
}
