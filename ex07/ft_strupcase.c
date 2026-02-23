/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:09:45 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:44:21 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn char *ft_strupcase(char *str)
 * @brief Converts a string to completely uppercase.
 * @details Iterates through the string, identifying lowercase characters and
 * mathematically subtracting 32 from their ASCII value to capitalize them.
 * @param str The string to be modified.
 * @return A pointer to the modified string.
 */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
