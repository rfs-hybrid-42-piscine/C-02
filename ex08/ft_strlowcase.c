/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:24:20 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:44:31 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn char *ft_strlowcase(char *str)
 * @brief Converts a string to completely lowercase.
 * @details Iterates through the string, identifying uppercase characters and
 * mathematically adding 32 to their ASCII value to lowercase them.
 * @param str The string to be modified.
 * @return A pointer to the modified string.
 */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}
