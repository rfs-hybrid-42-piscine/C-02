/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:45:34 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 04:44:00 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_str_is_uppercase(char *str)
 * @brief Checks if a string contains only uppercase alphabetical characters.
 * @details Evaluates each character against the ASCII boundaries 'A' and 'Z'.
 * @param str The string to evaluate.
 * @return 1 if the string is empty or completely uppercase, 0 otherwise.
 */
int	ft_str_is_uppercase(char *str)
{
	if (!str)
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
