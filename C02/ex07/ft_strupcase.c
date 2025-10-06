/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:47:11 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/28 14:23:53 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char chr)
{
	return (chr >= 'a' && chr <= 'z');
}

char	to_upper(char chr)
{
	if (is_lower(chr))
		return (chr - ('a' - 'A'));
	return (chr);
}

char	*ft_strupcase(char *str)
{
	char	*ptr;

	if (!str)
		return (0);
	ptr = str - 1;
	while (*++ptr)
		*ptr = to_upper(*ptr);
	return (str);
}
