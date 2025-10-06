/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 06:24:07 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/28 07:39:03 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Warning: If there is no null byte among the first n  bytes
       of src, the string placed in dest will not be null-terminated. 

 If  the  length of src is less than n, strncpy() writes additional null
       bytes to dest to ensure that a total of n bytes are written.*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr;

	if (!dest || !src)
		return (0);
	ptr = dest;
	while (n && *src)
	{
		*ptr++ = *src++;
		n--;
	}
	while (n--)
		*ptr++ = 0;
	return (dest);
}
