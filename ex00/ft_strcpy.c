/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:04:47 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:39:23 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn char *ft_strcpy(char *dest, char *src)
 * @brief Copies a string from a source to a destination.
 * @details Iterates through the source string, copying each character to the
 * destination buffer, and manually appends the null-terminating byte ('\0').
 * @param dest A pointer to the destination array where the content is to be
 * copied.
 * @param src A pointer to the null-terminated string to be copied.
 * @return A pointer to the destination string (dest).
 */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
