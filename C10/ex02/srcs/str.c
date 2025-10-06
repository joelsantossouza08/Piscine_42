/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:02:51 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/10 22:38:00 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

#define ULONG_MAX	"18446744073709551615"
#define TOO_LARGE	": Value too large for defined data type"

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 == *s2)
	{
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_is_str_ulong(char *program_name, char *str)
{
	char	*ptr;

	if (!str)
		return (0);
	ptr = str;
	str += *str == '-';
	ptr += *ptr == '-' || *ptr == '+';
	while (*ptr)
	{
		if (!(*ptr >= '0' && *ptr <= '9'))
		{
			ft_tail_invalid_bytes(program_name, str, 0);
			return (0);
		}
		ptr++;
	}
	if (ft_strlen(str) >= 20 && ft_strcmp(str, ULONG_MAX) > 0)
	{
		ft_tail_invalid_bytes(program_name, str, TOO_LARGE);
		return (0);
	}
	return (1);
}

unsigned long	ft_atoul(const char *str)
{
	unsigned long	nbr;
	char			sign;

	if (!str)
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	nbr = 0;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + (*str++ - '0');
	return (nbr * sign);
}
