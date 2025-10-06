/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:22:05 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/28 18:39:13 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char chr)
{
	return (chr >= 'A' && chr <= 'Z');
}

char	to_lower(char chr)
{
	if (is_upper(chr))
		return (chr + ('a' - 'A'));
	return (chr);
}

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	if (!str)
		return (0);
	ptr = str - 1;
	while (*++ptr)
		*ptr = to_lower(*ptr);
	return (str);
}
