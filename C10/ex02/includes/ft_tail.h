/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:59:54 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/11 07:40:01 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

# define STDIN		0
# define STDOUT		1
# define STDERR		2
# define INVALID	-2
# define ERROR		-1

void			ft_fputchar(int fd, char c);
void			ft_fputstr(int fd, char *str);

int				ft_strcmp(char *s1, char *s2);
int				ft_is_str_ulong(char *program_name, char *str);
unsigned long	ft_atoul(const char *str);

void			ft_tail_invalid_bytes(char *program_name, char *invalid,
					char *extra);
void			ft_tail_invalid_file(char *program_name, char *file);
void			put_title(char *file_path);
void			ft_display_last_bytes(int file, unsigned long last_bytes);
void			ft_tail(char **argv, unsigned long last_bytes,
					void (*put_title)(char *));

#endif
