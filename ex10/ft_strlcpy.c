/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:41:44 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 15:57:36 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
 * @brief Safely copies a string to a sized buffer.
 * @details Copies up to size - 1 characters from the NUL-terminated string
 * src to dest, NUL-terminating the result if size is not 0.
 * @param dest The destination buffer.
 * @param src The source string to be copied.
 * @param size The total size of the destination buffer.
 * @return The total length of the string it tried to create (length of src).
 */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	if (src)
		while (src[src_len])
			src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
