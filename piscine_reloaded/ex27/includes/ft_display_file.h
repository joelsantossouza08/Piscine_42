/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:06:08 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/04 12:03:56 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>

# define BUF_SIZE	1024
# define STDOUT		1
# define STDERR		2

void	ft_fputstr(int fd, char *str);
void	ft_display_file(char *file_name);

#endif
