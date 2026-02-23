/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:29:37 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:42:41 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn char *ft_strncpy(char *dest, char *src, unsigned int n)
 * @brief Copies up to n characters from the string pointed to, by src to dest.
 * @details If the length of src is less than n, the remainder of dest will be
 * padded with null bytes. If it is longer, no null byte is implicitly added.
 * @param dest Pointer to the destination array.
 * @param src Pointer to the source string.
 * @param n Maximum number of characters to be copied.
 * @return A pointer to the destination string (dest).
 */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
