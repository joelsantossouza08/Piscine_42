/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 08:56:28 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/28 11:26:32 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char chr)
{
	return (chr >= 'a' && chr <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!is_lower(*str++))
			return (0);
	return (1);
}
