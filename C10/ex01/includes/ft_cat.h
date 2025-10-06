/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 08:06:02 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/11 07:43:09 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <libgen.h>
# include <errno.h>

# define BUF_SIZE	4028
# define STDIN		0
# define STDOUT		1
# define STDERR		2

void	ft_cat_error_msg(char *program_name, char *file_path);
int		ft_strcmp(char *s1, char *s2);
void	ft_fputstr(int fd, char *str);
void	ft_display_file(char *program_name, char *file_path);

#endif
