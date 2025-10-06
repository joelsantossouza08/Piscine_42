/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:54:17 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 10:23:57 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <libgen.h>
# include <errno.h>

# define STDIN		0
# define STDOUT		1
# define STDERR		2
# define INVALID	-1
# define VALID		1
# define FIELD		16

void			ft_fputchar(int fd, char c);
void			ft_fputstr(int fd, char *str);
void			ft_puthex(long int nbr, int width);

int				ft_strcmp(char *s1, char *s2);
int				ft_bufcmp(unsigned char *s1, unsigned char *s2, unsigned int n);
unsigned char	*ft_bufcpy(unsigned char *dest, unsigned char *src,
					unsigned int n);

void			ft_hexdump_error_msg(char *program_name, char *file_path,
					int nfiles);
void			ft_hexdump_error_directory(char *program_name, char *file_path);
void			ft_print_n_rows(int *index, unsigned char buf[FIELD + 1],
					int bytes_read, int nflags);

void			ft_print_row(int *index, unsigned char buf[FIELD + 1],
					unsigned int bytes_read);
int				skiped_dup_bufs(unsigned char buf[FIELD + 1], int *index);
int				buf_filler(int fd, unsigned char buf[FIELD + 1], int size,
					int *bytes_read);
void			ft_hexdump(char **argv, unsigned int nfiles, int nflags);

#endif
